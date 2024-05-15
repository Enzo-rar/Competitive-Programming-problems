#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool u = false, d = false, r = false, l = false;
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            if(x < 0) l = true;
            if(x > 0) r = true;
            if(y < 0) d = true;
            if(y > 0) u = true;
        }
        if(u && d && l && r) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}