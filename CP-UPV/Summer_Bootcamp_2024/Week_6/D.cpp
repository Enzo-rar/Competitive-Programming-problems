#include <bits/stdc++.h>
using namespace std;

void thingy(int t, int curr){
    string ans = "";
    for(int i = 0; i < curr; i++) ans += '#';
    if (t == curr){
        cout << ans << endl;
    }
    else {
        cout << ans << endl;
        thingy(t, curr+1);
        cout << ans << endl;
    }
    
}

int main()
{
    int t; cin >> t;
    thingy(t, 1);
    return 0;
}