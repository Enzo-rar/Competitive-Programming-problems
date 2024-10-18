#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin >> a;
    int ans[a];
    for(int i = 0; i < a; i++){
        cin >> ans[i];
    }
    for(int i = 0; i < a; i++){
        int aux; cin >> aux; ans[i] += aux;
        cout << ans[i] << " ";
    }
    return 0;
}