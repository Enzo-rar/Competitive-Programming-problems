#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string aux; cin >> aux;
        string ans = "";
        for(int i = n -1; i >= 0; i--){
            if(aux[i] == 'b' || aux[i] == 'c' || aux[i] == 'd'){
                ans = "." + aux.substr(i-2, 3) + ans;
                i -= 2;
            }
            else if(aux[i] == 'a' || aux[i] == 'e'){
                ans = "." + aux.substr(i-1, 2) + ans;
                i -= 1;
            }
        }
        ans = ans.substr(1);
        cout << ans << endl;
    }
    return 0;
}