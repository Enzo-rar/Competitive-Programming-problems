#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        string aux;
        cin >> aux;
        if((aux[0] == 89 || aux[0] == 121) && (aux[1] == 69 || aux[1] == 101) && (aux[2] == 83 || aux[2] == 115))   cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}