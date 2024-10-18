#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        for(int i = 0; i < 5; i++){
            int mi = a;
            mi = min(a, b); mi = min(mi, c);
            if(mi == a){
                a++;
            }
            else if(mi == b){
                b++;
            }
            else c++;
        }
        cout << a * b * c << endl;
    }
    return 0;
}