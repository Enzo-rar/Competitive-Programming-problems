#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    while(n--){
        string aux; cin >> aux;
        int a = 0, b = 0;
        for(int i = 0; i < 5; i++){
            if(aux[i] ==  'A') a++; else b++;
        }
        if(a > b) cout << "A" << endl; else cout << "B" << endl;
    }
    return 0;
}
