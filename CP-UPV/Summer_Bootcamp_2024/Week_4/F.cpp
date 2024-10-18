#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string empt = ""; for(int i = 0; i < n; i++) empt+= ".";
    string a[n];
    bool isEmpty = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] != empt) isEmpty = false;
    }
    bool isDiff = false;
    for(int i = 0; i < n; i++){
        string aux; cin >> aux;
        if(aux != a[i]) isDiff = true;
    }
    if(isEmpty) cout << "NO LLEVABA MERMELADA";
    else if(isDiff) cout << "TRAGEDIA";
    else cout << "HA HABIDO SUERTE";
    return 0;
}