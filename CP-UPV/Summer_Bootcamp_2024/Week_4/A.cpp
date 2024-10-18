#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;string a; getline(cin, a);
    while(t--){
    getline(cin, a);
    int v = 0, c = 0;
    
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
                v++;
            }
            else if(a[i] != ' ') {c++;
            }
        }
        
    
    cout << v << " " << v + c << endl;
    }
    return 0;
}

    //Perdon, literalmente no había leído el enunciado c:   