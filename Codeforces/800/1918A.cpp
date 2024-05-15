#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int a; int b; cin >> a >> b;
        if (b % 2 == 1) b--;
        a = a * b;
        a /= 2;
        cout << a << endl;
    }
    return 0;
}