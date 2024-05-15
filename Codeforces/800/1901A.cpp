#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int aux = 0;
        int station = 0;
        int maxFuel = 0, currFuel = 0;
        for(int i = 0; i < n; i++){
            station; cin >> station;
            currFuel = station - aux;
            maxFuel = max(currFuel, maxFuel);
            aux = station;
        }
        currFuel = 2*(x-station);
        maxFuel = max(currFuel, maxFuel);
        cout << maxFuel << endl;
    }

    return 0;
}