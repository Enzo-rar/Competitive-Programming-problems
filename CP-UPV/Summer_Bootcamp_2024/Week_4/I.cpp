#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    bool isOG = true;
    
    for(int i = 0; i < n - 1 && isOG; i++){
        for(int j = 0; j < m-1 && isOG; j++){
            if(a[i][j] == '#' && a[i][j+1] == '#' && a[i+1][j] == '#' && a[i+1][j+1] == '#') {isOG = false; break;}
        }
    }
    
    if(isOG) cout << "ORIGINAL";
    else cout << "NO ORIGINAL";
    return 0;
}