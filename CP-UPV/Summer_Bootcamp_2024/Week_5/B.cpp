#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int ans = a[n-1] - a[0];
    for(int i = 0; i < n - 1; i++){
        ans = min(ans, a[i+1] - a[i]);
    }
    cout << ans;
    return 0;
}