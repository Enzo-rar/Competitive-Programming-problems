#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    string a; getline(cin, a);
    while(t--){
        getline(cin, a);
        int s = 1;
        string ans = "*";
        for(int i = 0; i < a.size(); i++){
            if(a[i] == ' '){
                ans+= "**"; s += 2;
            }
            
            else{
                s+=4;
                ans += " ";
                ans += a[i]; ans += " *";
                
            }
            
        }
        
        string aux = "";
        while(s--){
            aux+= '*';
        }
        cout << aux << endl << ans << endl << aux << endl;
    }
    return 0;
}