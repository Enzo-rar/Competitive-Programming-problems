#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        int aux = n, ans = 0;
        if(n % 2 == 1){
            aux--;
            ans += a;
        }
        if(b < 2*a){
            ans += b*aux/2;
        }
        else ans += a*aux;
        cout << ans << endl;
    }
    return 0;
}