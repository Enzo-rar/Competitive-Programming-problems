#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
      int n; cin >> n;
      int minN, maxN; cin >> minN;
      maxN = minN;
      n--;
      int aux;
      for(int i = 0; i < n; i++){
          cin >> aux;
          minN = min(minN, aux);
          maxN = max(maxN, aux);
      }
      cout << maxN - minN << endl;
    }
    return 0;
}