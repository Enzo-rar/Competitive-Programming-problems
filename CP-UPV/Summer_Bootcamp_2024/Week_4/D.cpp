#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '#'){
                a[i][j] = '?';
                for(int k = 0; k < n; k++){
                    if(a[k][j] != '#') a[k][j] = '?';
                }
                for(int k = 0; k < m; k++){
                    if(a[i][k] != '#') a[i][k] = '?';
                }
            }
        }
    }

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '?') a[i][j] = '#';
            cout << a[i][j];
        }
        cout << endl;
    }
    
    return 0;
}

//Man I Love Fish