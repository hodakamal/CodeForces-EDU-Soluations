#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, r;        cin >> n >> r;
         vector < ll > v(n);        
         for(auto &i : v)          cin >> i;
         ll count = 0, i = 0, j = 0;
         for(int i = 0; i < n ; i++){
             ll pos = upper_bound(v.begin(), v.end(), (v[i] + r)) - v.begin();
             count += (n - pos);
         }
         cout << count;
    }
}