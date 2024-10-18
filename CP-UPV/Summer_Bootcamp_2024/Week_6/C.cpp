#include <bits/stdc++.h>
using namespace std;

long long thingy(long long t){
    if(t == 0) return 0;
    else return t + thingy(t-1);
}

int main()
{
    long long t; cin >> t;
    cout << thingy(t);
    return 0;
}