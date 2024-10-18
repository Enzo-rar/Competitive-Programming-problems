#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a; string b;
    while(getline(cin, a)){
        if(a.size() % 2 == 0){
            b = a;
            for(int i = 0; i < a.size(); i++){
                a[a.size()-1-i] = b[i];
            }
        }
        cout << a << endl;
    }
    return 0;
}