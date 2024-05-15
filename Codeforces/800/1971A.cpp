#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int mX, mY; mX = min(x, y); mY = max(x, y);
        cout << mX << " " << mY << endl;
    }

    return 0;
}
