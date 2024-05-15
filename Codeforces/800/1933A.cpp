#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        long long ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < 0){
                ans -= a[i];
            }
            else ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
