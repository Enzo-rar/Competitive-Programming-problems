#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        int maxV = 0;
        int minV = 11;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            maxV = max(maxV, arr[i]);
            minV = min(minV, arr[i]);
        }
        if(arr[0] == minV)  cout << "YES" << endl;
        else                cout << "NO" << endl;
    }

    return 0;
}