#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        string aux; cin >> aux;
        if(aux.size() < 3){
           cout << "NO" << endl; 
        }
        else{
            if(aux[0] == '1' && aux[1] == '0' && aux[2] != '0'){
                aux = aux.substr(2, aux.size()-2);
                int a = stoi(aux);
                if(a != 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}