#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = 0;
        bool infWat = false;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == '.'){
                int wat = 1;
                for(int j = i+1; j < n && s[j] == '.'; j++){
                    wat++;
                }
                i+=wat;
                if(wat >= 3){
                        infWat = true;
                }
            }
        }
        if(infWat) ans = 2;
        else{
            for(int i = 0; i < n; i++){
                if(s[i] == '.')
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
