#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; cin >> a;
    while(cin >> b){
        if(a > b) cout << "B";
        else if(a < b) cout << "S";
        else cout << "I";
        a = b;
    }
    return 0;
}