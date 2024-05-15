#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n]; int n1 = 0; int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1) n1++;
        }
        int pos = n-1;
        for(int i = n-1; i >= 0; i--){
            if(a[i] == 1) {pos = i; break;}
        }
       // cout << "Pos is at " << pos << endl;
        int n2 = 0;
        for(int i = pos; i >= 0; i--){
            //cout << "Now trying with i " << i << " which is a " << a[i] << endl;
            //cout << "n2 is " << n2 << " which is different from " << n1 << " and ans is " << ans << endl;
            
            if(a[i] == 0){
                a[pos] = 0; a[i] = 1; pos--; i = pos; ans++; n2 = 0;
            }
            n2++; if(n2 == n1) break;
        }
        cout << ans << endl;
    }

    return 0;
}