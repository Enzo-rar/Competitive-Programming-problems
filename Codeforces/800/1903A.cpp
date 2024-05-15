#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        bool ans = true;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(k == 1){
            for(int i = 0; i < n-1; i++){
                if(a[i] > a[i+1]) ans = false;
            }
        }
        if(ans) cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}