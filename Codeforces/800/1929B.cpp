#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        long long ans = 0;
        if (k == 4 * n - 2){
            ans = k/2 + 1;
        }
        else if (k % 2 == 0){
            ans = k / 2;
        }
        else ans = k / 2 + 1;
        cout << ans << endl;
    }
    

    return 0;
}