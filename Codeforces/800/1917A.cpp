#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long ans = 1;
        while(n--){
            long long aux; cin >> aux;
            if(aux == 0){
                ans = 0;
            }
            else if (aux < 0){
                ans *= -1;
            }
        }
        if(ans > 0){
            cout << "1" << endl << "1 0" << endl;
        }
        else cout << "0" << endl;
    }

    return 0;
}