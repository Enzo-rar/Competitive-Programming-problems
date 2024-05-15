#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        long long ans = 0;
        int arr[n];
        for(int i = 0; i < n; i++){arr[i] = 0;}
        for(int i = n-1; i > 0; i--){
            if(s[i] == 'B' && s[i-1] == 'A' && arr[i-1] == 0){
                ans++;
                s[i] = 'A'; s[i-1] = 'B';
                arr[i-1] = 1;
                i+=2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}