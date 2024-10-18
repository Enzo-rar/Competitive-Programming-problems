#include <bits/stdc++.h>
using namespace std;

long long thingy(long long t){
    if(t == 1 || t == 2) return 1;
    else return thingy (t-1) + thingy(t-2);
}

int main()
{
    long long t; cin >> t;
    cout << thingy(t);
    return 0;
}