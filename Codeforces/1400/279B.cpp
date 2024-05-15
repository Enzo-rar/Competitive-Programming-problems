/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    int r = n-1, l = r;
    while(l >= 0){
        if(a[l] <= t){
            t-= a[l];
            l--;
            ans = max(ans, r - l);
        }
        else{
            while(a[l] > t){
                t += a[r];
                r--;
            }
        }
    }
    cout << ans;
    return 0;
}