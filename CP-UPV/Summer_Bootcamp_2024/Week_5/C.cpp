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
    int q; cin >> q;
    while(q--){
        int aux; cin >> aux;
        int curr = 0;
        int l = 0, r = n-1;
        while(l <= r){
            int m = l + (r - l) / 2;
            curr = a[m];
            if(curr < aux) l = m+1;
            else if(curr > aux) r = m - 1;
            else break;
        }
        if(curr == aux) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}