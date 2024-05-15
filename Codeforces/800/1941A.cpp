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
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        int l[a], r[b];
        int ans = 0;
        for(int i = 0; i < a; i++){
            cin >> l[i];
        }
        for(int i = 0; i < b; i++){
            cin >> r[i];
        }
        sort(l, l+a);
        sort(r, r+b);
        
        for(int i = 0; i < a && l[i] + r[0] <= c; i++){
            for(int j = 0; j < b && l[i] + r[j] <= c; j++) ans++;    
        }
        cout << ans << endl;
    }

    return 0;
}