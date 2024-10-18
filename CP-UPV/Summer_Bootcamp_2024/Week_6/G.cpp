#include <bits/stdc++.h>
using namespace std;

int a[25][25];

int x, y;

int ans(int py, int px){
    int minx = a[py][px], maxx = minx;
    for(int i = px + 1; i < x; i++){
        minx = min(minx, a[py][i]);
    }
    if(minx == a[py][px]){
        for(int i = 0; i < y; i++){
            maxx = max(maxx, a[i][px]);
        }
        if(maxx == a[py][px]){
            cout << py << " " << px << endl;
        }
        else{
            if(py != y-1) return ans(py+1, 0);
            else return -1;
        }
    }
    else{
        return ans(py, px+1);
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        cin >> y >> x;
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                cin >> a[i][j];
            }
        }
        int f = ans(0, 0);
        if(f == -1) cout << "-1 -1" << endl;
    }
    
    
    return 0;
}