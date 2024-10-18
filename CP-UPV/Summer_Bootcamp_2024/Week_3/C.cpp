#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    while(n--){
        int f; cin >> f;
        if(f == 1){
            double a; cin >> a;
            cout << setprecision(5) << fixed <<3.141592 * a * a << endl;
        }
        else if(f == 2){
            double a; cin >> a; cout << setprecision(5) << fixed << a * a << endl;
        }
        else if(f == 3){
            double a, b; cin >> a >> b; cout << setprecision(5) << fixed << a * b << endl;
        }
        else {
            double a, b; cin >> a >> b; cout << setprecision(5) << fixed << a * b / 2 << endl; 
        }
    }
    return 0;
}   