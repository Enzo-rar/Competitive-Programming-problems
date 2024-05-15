/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        long long sum = 0;
        bool r1 = false, r2 = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] % 3 == 1){
                r1 = true;
            }
            else if(a[i] % 3 == 2){
                r2 = true;
            }
        }
        if(sum % 3 == 0){
            cout << 0 << endl;
        }
        else if(sum % 3 == 1){
            if(r1) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }

    return 0;
}
