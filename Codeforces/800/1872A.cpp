#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(a == b) cout << 0 << endl;
        else{
            int A = max(a, b);
            int B = min(a, b);
            int target = A - B;
            int aux = target / 2;
            int ans = aux / c;
            if(aux % c != 0 || target % 2 != 0){
                ans++;
            }
            cout << ans << endl;
            
        }
    }

    return 0;
}


//          ,
//         /|      __
//       / |   ,-~ /
//       Y :|  //  /
//       | jj /( .^
//       >-"~"-v"
//      /       Y
//     jo  o    |
//   ( ~T~     j
//     >._-' _./
//   /   "~"  |
//   Y     _,  |
//  /| ;-"~ _  l
// / l/ ,-"~    \
// \//\/      .- \
//  Y        /    Y    
//  l       I     !
//  ]\      _\    /"\
// (" ~----( ~   Y.  )