#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int mi, ma; cin >> mi; ma = mi; n--;
    while(n--){
        int aux; cin >> aux;
        mi = min(mi, aux); ma = max(ma, aux);
        
    }
    cout << mi << " " << ma;
    return 0;
}