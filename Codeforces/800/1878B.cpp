#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        arr[0] = 1;
        arr[1] = 3;
        for(int i = 2; i < n; i++){
            arr[i] = arr[i-1] +2;
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
            if(i > 1 && (arr[i]*3) % (arr[i-1]+arr[i-2]) == 0)
            cout << "wtf ";
        }
        cout << endl;
        
    }
    return 0;
}