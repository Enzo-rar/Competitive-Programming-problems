#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    while(m--){
        int aux; cin >> aux;
        int ma, mi; ma = max(aux, n); mi = min(aux, n);
        aux = ma - mi;
        if(aux == 0) cout << "1p ";
        else if(aux <= 5) cout << "0.5p ";
        else if(aux <= 10) cout << "0.25p ";
        else cout << "0p ";
    }

    return 0;
}