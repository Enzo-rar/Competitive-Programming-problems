#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        long long ans = 1;
        for(int i = 0; i < n; i++){
            int aux; cin >> aux;
            ans *= aux;
        }
        if(2023 % ans == 0){
            cout << "YES" << endl;
            for(int i = 1; i < k; i++){
                cout << "1 ";
            }
            cout << 2023 / ans << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}