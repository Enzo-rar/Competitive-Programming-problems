#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        long double n, m, e; cin >> n >> m >> e;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                long double aux; cin >> aux;
                if(aux <= e) cout << setprecision(6) << fixed << 0. << " ";
                else cout << setprecision(6) << fixed << aux << " ";
            }
            cout << endl;
        }
    }
    return 0;
}