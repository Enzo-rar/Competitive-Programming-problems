#include <bits/stdc++.h>
using namespace std;

int n = 1024;
char a[1024][1024];


int ans(int x, int y, int xp, int yp){
    if(a[y][x] == 'C') return 0;
    else{
        if(x < n-1 && xp != -1 && a[y][x+1] != '.'){
            int an = ans(x+1, y, 1, 0);
            if(an > -1) return (an + 1);
            //cout << "R ";
        }
        if(x > 0 && xp != 1 && a[y][x-1] != '.'){
            int an = ans(x-1, y, -1, 0);
            if(an > -1) return (an + 1);
            //cout << "L ";
        }
        if(y < n-1 && yp != 1 && a[y+1][x] != '.'){
            int an = ans(x, y+1, 0, -1);
            if(an > -1) return (an + 1);
            //cout << "D ";
        }
        if(y > 0 && yp != -1 && a[y-1][x] != '.'){
            int an = ans(x, y-1, 0, 1);
            if(an > -1) return (an + 1);
            //cout << "U ";
        }
        return -1;
    }
}



int main()
{
    for(int i = 0; i < 1024; i++){
    for(int j = 0; j < 1024; j++){
        a[i][j] = '.';
    }
}
    cin >> n;
    int x, y;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'R'){x = j, y = i;}
        }
    }
    
    cout << ans(x, y, 0, 0);
    
    return 0;
    
    //I HATE THIS FROG
}