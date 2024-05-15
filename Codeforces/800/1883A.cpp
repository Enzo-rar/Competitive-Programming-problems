#include <bits/stdc++.h>

using namespace std;

int solve(string s){
    int ans = 0;
    int curr = 0;
    while(s.size()>0){
        if(s[0] == '0'){
            while(curr != 9){
                ans++;
                curr++;
            }
            ans++;
            s = s.substr(1,s.size()-1);

        }
        else if (s[0] - '0' <= curr){
            while(curr != s[0] - '0' - 1){
                ans++;
                curr--;
            }
            ans++;
            s = s.substr(1,s.size()-1);
        }
        else if (s[0] - '0' > curr){
            while(curr != s[0] - '0' -1){
                ans++;
                curr++;
            }
            s = s.substr(1,s.size()-1);
            ans++;
        }
        
    }
    return ans;
}

int main()
{
    int t; cin >> t;
    string aux;
    for(int o = 0; o < t; o++){
        cin >> aux;
        cout << solve(aux) << endl;
    }
    return 0;
}