#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool isT = true;
        int i = 1;
        while(i < n-1 && isT){
            a[i] -= 2 * a[i-1];
            a[i+1] -= a[i-1];
            if(a[i] < 0 || a[i+1] < 0){
                isT = false;
                //cout << "here a[i] and a[i+1] are " << a[i] << " " << a[i+1] << endl;
            }
            i++;
        }
        if(i == n-1 && (a[n-2] != 0 || a[n-1] != 0 )) cout << "NO" << endl;
        else if(i == n-1 && isT) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}