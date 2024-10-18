using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    int ans = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        ans = max(ans, sum);
    }
    
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j][i];
        }
        ans = max(sum, ans);
    }
    cout << ans;
    return 0;
}