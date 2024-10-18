#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b; char c;
    cin >> a >> c >> b;
    if(c == '+'){
        cout << a + b;
    }
    else if(c == '-'){
        cout << a - b;
    }
    else if(c == '*'){
        long long ans = a * b;
        cout << ans;
    }
    else if(c == '/'){
        if(b != 0){
            cout << setprecision(2) << fixed << round(a*100/b) / 100;
        }
        else cout << "ERROR";
    }

    return 0;
}