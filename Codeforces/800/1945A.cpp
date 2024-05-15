//               ((`\
//             ___ \\ '--._
//          .'`   `'    o  )
//         /    \   '. __.'
//       _|    /_  \ \_\_
//       {_\______\-'\__\_\

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(b % 3 == 1 && c < 2) cout << -1 << endl;
        else if (b % 3 == 2 && c < 1) cout << -1 << endl;
        else{
            a += (b + c) / 3;
            if ((b + c) % 3 > 0) a++;
            cout << a << endl;
        }
    }
    return 0;
}