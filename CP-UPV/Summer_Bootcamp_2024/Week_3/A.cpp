#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int n; cin >> n;
    string ans = "";
    if(s == "Soleado" && n >= 20) ans+= "Adrian ";
    if(s == "Soleado" || n > 15) ans+= "Barbara ";
    if(s == "Soleado" || s == "Nublado") ans+= "Carmen ";
    if(s != "Tormenta") ans += "Dario";
    cout << "Vienen a pasear: " << ans;
    return 0;
}


//こんにちは、私はENZOです