#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i+= k){
            for(int j = 0; j < n; j += k){
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}