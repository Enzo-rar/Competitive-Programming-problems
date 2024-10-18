#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; cin >> a >> b;
    int ans = 0;
    for(int i = 0; i < a*b; i++){
        char n, m;
        cin >> n >> m;
        if(n == '#' || m == '#') ans++;
    }
    cout << ans;
    return 0;
}