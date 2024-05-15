#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        string aux; cin >> aux;
        if(aux.size() <= 1){cout << "NO" << endl;}
        else{
            bool a = false;
            for(int i = 0; i < aux.size(); i++){
                if(aux[i] != aux[0]){
                    char t = aux[0];
                    aux[0] = aux[i];
                    aux[i] = t;
                    cout << "YES" << endl;
                    cout << aux << endl;
                    a = true;
                    break;
                }
            }
            if(!a) cout << "NO" << endl;
        }
    }
    return 0;
}
