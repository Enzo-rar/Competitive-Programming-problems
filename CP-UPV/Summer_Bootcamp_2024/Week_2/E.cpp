#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c; cin >> a >> b >> c;
    cout << (a & b) << " " << ((a & b) | c) << " " << (((a & b) | c) ^ b);
    return 0;
}

        // tengo hambre