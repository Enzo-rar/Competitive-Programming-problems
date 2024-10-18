#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m; cin >> n >> m;
    char a[n][m], ans[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != '*'){
                int sum = 0;
                if(i < n-1 && a[i+1][j] == '*') sum++;
                if(i < n-1 && j < m-1 && a[i+1][j+1] == '*') sum++;
                if(i < n-1 && j > 0 && a[i+1][j-1] == '*') sum++;
                if(i > 0 && a[i-1][j] == '*') sum++;
                if(i > 0 && j < m-1 && a[i-1][j+1] == '*') sum++;
                if(i > 0 && j > 0 && a[i-1][j-1] == '*') sum++;                 
                if(j > 0 && a[i][j-1] == '*') sum++;
                if(j < m-1 && a[i][j+1] == '*') sum++;
                if(sum == 0) ans[i][j] = ' ';
                else{
                    char aux = '0' + sum; ans[i][j] = aux;
                }
                cout << ans[i][j];
            }
            else cout << 'F';
        }
        cout << endl;
    }
    return 0;
}


            //La lectura de este programa a ojos de una persona normal es menos consistente que el menú de la vella, lo siento mucho