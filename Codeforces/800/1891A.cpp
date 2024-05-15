#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int o = 0; o < t; o++){
        int n; cin >> n;
        bool isP = true;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = n-1; i >= 1 && isP; i--){
            int j = i-1;
            if(arr[j]>arr[i]){
                if((j != 0 &&j != 1 &&j != 3 &&j != 7 && j != 15)){
                    isP = false;
                }
                else{
                    while(arr[j]>arr[i]){
                        for(int k = 0; k <= j; k++){
                            arr[k]--;    
                        }
                    }
                }
            }
        }
        if(isP) cout << "YES"<<endl;
        else cout << "NO" << endl;
    }

    return 0;
}