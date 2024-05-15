#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin >> t;
    t -= 2;
    int a, b, prot;
    cin >> a >> b;
    a = a%2; b = b%2;
    if (a == b) prot = 0;
    else prot = 1;
    int i = 2;
    while(t--){
        i++;
        int aux; cin >> aux;
        aux = aux % 2;
        if(prot == 0){
            if(aux != a){
                break;
            }
        }
        else{
            if(aux != a){
                i = 1; 
                break;
            }
            else {
                i = 2; break;
            }
        }
    }
    cout << i << endl;
    return 0;
}