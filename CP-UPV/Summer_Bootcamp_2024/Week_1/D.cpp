#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a; getline(cin, s); a = s;
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
        a[i] = tolower(s[i]);
    }
    
    cout << a << endl << s;
    return 0;
}

//           /\ /|
//           |||| |
//           \ | \
//       _ _ /  @ @
//      /    \   =>X<=
//   /|      |   /
//   \|     /__| |
//      \_____\ \__\