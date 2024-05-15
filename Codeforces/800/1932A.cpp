#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string aux; cin >> aux;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(aux[i] == '@') ans++;
            else if (aux[i] == '*'){
                if(i < n-1 && aux[i+1] == '*'){
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}