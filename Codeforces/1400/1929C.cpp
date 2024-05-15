#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        long long k, x, a; cin >> k >> x >> a;
        if (k > x && a > k) cout << "YES" << endl;
        else{
            long long aux = k;
            int count = 0;
            long long add = 1;
            long long total = 0;
            long long offset;
            while(count <= x){
                if (total > a) break;
                if (total + add < aux){
                    //cout << "1. in this case total + add < k = " << total << " + " << add << " < " << aux << endl;
                    count ++;
                    total += add;
                }
                else{
                    //cout << "3. in this case total + add > k = " << total << " + " << add << " < " << aux << "      ";
                    offset = total + add - aux;
                    //cout << " offset in this case is " << offset << endl;
                    if(offset >= k-1){
                        int times = (offset /(k-1) )+1;
                        add += times;
                        aux += k*times;
                    }
                    else{
                    add++;
                    aux += k;}
                    //cout << "now k is " << aux << " and total + add is " << total << " + " << add << endl;
                    if (total + add < aux){
                    //cout << "2. in this case total + add < k = " << total << " + " << add << " < " << aux << endl;
                    total += add;
                    count++;
                    }
                }
            }
            //cout << total << endl;
            if(total <= a) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    

    return 0;
}