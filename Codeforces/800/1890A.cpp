#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int o = 0; o < t; o++){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int a, b, nA, nB;
        a = arr[0];
        int i = 0;
        while(i < n-1 && arr[i] == a){
            i++;
        }
        b = arr[i];
        if(a == b || n == 1 | n == 2)  cout << "Yes" << endl;
        else{
            nA = 0; nB = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == a) nA++;
                else if (arr[i] == b) nB++;
            }
            if(nA + nB == n && (nA - nB == 0 || nA - nB == 1 ||nA - nB == -1)){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }

    return 0;
}