#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m){
    if(n < m){
        if(m % 2 == 0){
            return 1 + solve(n, m/2);
        }
        else
            return 2 + solve(n, m/2 + 1);
    }
    else return n - m;
}

int main()
{
    int n, m; cin >> n >> m;
    int ans = 0;
    if(n == m) ans = 0;
    else if (n > m) ans = n - m;
    else {
        ans = solve(n, m);
    }
    cout << ans;
    return 0;
}