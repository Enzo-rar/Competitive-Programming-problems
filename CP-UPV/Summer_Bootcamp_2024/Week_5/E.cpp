
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        cin >> a[i].second;
        a[i].second = INT32_MAX - a[i].second;
    }
    sort(a, a+n);
    for(int i = n-1; i >= 0; i--){
        cout << a[i].first << " " << INT32_MAX - a[i].second << endl;
    }
    return 0;
}