#include <bits/stdc++.h>
using namespace std;

void thingy(int t){
    if(t != 0){
        cout << t << endl;
        thingy(t-1);
    }
}

int main()
{
    int t; cin >> t;
    thingy(t);
    return 0;
}