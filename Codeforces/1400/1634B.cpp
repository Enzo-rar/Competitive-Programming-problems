#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        long long n, x, y, a;
        cin >> n >> x >> y;
        int curr, aux;
        y = y % 2;
        x = x % 2;
        while(n--){
            cin >> aux; 
            aux = aux % 2;
            if(aux == x){
                x = 0;
            }
            else x = 1;
        }
        if (x == y){
            cout << "Alice" << endl;
        }
        else cout << "Bob" << endl;
    }

    return 0;
}