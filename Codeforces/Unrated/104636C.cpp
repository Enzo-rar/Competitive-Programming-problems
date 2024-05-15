#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int pos = 1;
    int n; cin >> n;
    int sum = 0, aux, comp = 0;
    n--;
    for(int i = 0; i < 4; i++) {cin >> aux; sum += aux;}
    for(int i = 0; i < n; i++){
        aux = 0; comp = 0; 
        for(int i = 0; i < 4; i++){
            cin >> aux;
            comp += aux;
        }
        if(comp > sum) {pos ++;}
    }
    
    cout << pos;
 
    return 0;
}