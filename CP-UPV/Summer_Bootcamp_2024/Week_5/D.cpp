
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    pair<int, string> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        cin >> a[i].second;
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}