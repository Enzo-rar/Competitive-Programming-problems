#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int o = 0; o < t; o++){
        list <string> op;
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int countB = 0;
        int ans = 0;
        for(char c : s){
            if(c == 'B') countB++;
        }
        if(countB < k){
            ans = 1;
            int i = 0;
            while(countB < k){
                if(s[i] == 'A') countB++;
                i++;
            }
            op.push_front(to_string(i) + " B");
        }
        else if(countB > k){
            ans = 1;
            int i = 0;
            while(countB > k){
                if(s[i] == 'B') countB--;
                i++;
            }
            op.push_front(to_string(i) + " A");
        }
        cout << ans << endl;

        if(ans > 0){
            for(string ax : op){
            cout << ax << endl;
            }
        }

    }
    
    return 0;
}