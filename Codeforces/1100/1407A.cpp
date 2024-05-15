#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int sum1 = 0;
        int sum0 = 0;
        int ans = n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0){
                sum0++;
            }
            else{
                sum1++;
            }
        }
        if(sum0 >= sum1){
            cout << sum0 << endl;
            for(int i = 0; i < sum0; i++){
                cout << 0 << " ";
            }
            cout << endl;
        }
        
        else{
            if(sum1 % 2 == 1) sum1 --;
            cout << sum1 << endl;
            for(int i = 0; i < sum1; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}