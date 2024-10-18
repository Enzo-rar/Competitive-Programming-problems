#include <bits/stdc++.h>
using namespace std;

int w= 900, h = 900;
char a[900][900];


int ans(int x, int y, int xp, int yp){
    if(a[y][x] == 'S') return 0;
    else{
        if(x < w-1 && xp != -1 && a[y][x+1] != '#'){
            int an = ans(x+1, y, 1, 0);
            if(an > -1) return (an + 1);
            //cout << "R ";
        }
        if(x > 0 && xp != 1 && a[y][x-1] != '#'){
            int an = ans(x-1, y, -1, 0);
            if(an > -1) return (an + 1);
            //cout << "L ";
        }
        if(y < h-1 && yp != 1 && a[y+1][x] != '#'){
            int an = ans(x, y+1, 0, -1);
            if(an > -1) return (an + 1);
            //cout << "D ";
        }
        if(y > 0 && yp != -1 && a[y-1][x] != '#'){
            int an = ans(x, y-1, 0, 1);
            if(an > -1) return (an + 1);
            //cout << "U ";
        }
        return -1;
    }
}



int main()
{
    for(int i = 0; i < 900; i++){
    for(int j = 0; j < 900; j++){
        a[i][j] = '#';
    }
}
    cin >> w >> h;
    int x, y;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
            if(a[i][j] == 'E'){x = j, y = i;}
        }
    }
    
    cout << 1 + ans(x, y, 0, 0);
    
    return 0;           //Ok if i'm honest this is the same code as the frog problem
}