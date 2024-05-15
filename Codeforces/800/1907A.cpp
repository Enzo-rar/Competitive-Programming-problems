#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char b[] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i = 0; i< 8; i++){
            if(b[i] != s[1]) cout << s[0] << b[i] << endl;
            if(a[i] != s[0]) cout << a[i] << s[1] << endl;
        }
    }
    return 0;
}