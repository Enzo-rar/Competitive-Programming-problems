#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t; cin >> t;
    while(t--){
        map <char, int> map;
        map['A'] = 3;
        map['B'] = 3;
        map['C'] = 3;
        int i = 0;
        while(i < 3){
            string aux; cin >> aux;
            int j = 0;
            while(j < 3){
                if (aux[j] == 'A' || aux[j] == 'B' || aux[j] == 'C')
                map[aux[j]] --;
                j++;
            }
            i++;
        }
        if(map['A'] == 1){
            cout << "A" << endl;
        }
        else if(map['B'] == 1){
            cout << "B" << endl;
        }
        else if(map['C'] == 1){
            cout << "C" << endl;
        }
    }
    return 0;
}