#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string a = "WBWBWBWB", b = "BWBWBWBW", x = "XXXXXXXX";
    while(n--){
        int c = 4;
        while(c--){
            string aux; cin >> aux;
            for(int i = 0; i < 8; i++){
                if(aux[i] != a[i]) cout << "X";
                else cout << a[i];
            }
            cout << endl;
            cin >> aux;
            for(int i = 0; i < 8; i++){
                if(aux[i] != b[i]) cout << "X";
                else cout << b[i];
            }
            cout << endl;
        }
    }
    return 0;
}