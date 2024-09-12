#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int aux, l, r; cin >> aux; n--; l = aux, r = aux;
        bool ans = true;
        for(int i = 0; i < n; i++){
            cin >> aux;
            if(aux == l-1){
                l--;
            }
            else if(aux == r+1){
                r++;
            }
            else ans = false;
        }
        if(ans) cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}