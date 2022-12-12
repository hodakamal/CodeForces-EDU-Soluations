#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, q;        cin >> n >> q;
         vector < int > v(n);
         for(auto &i : v)          cin >> i;
         while( q-- ){
              ll target;      cin >> target;
              cout << lower_bound(v.begin(), v.end(), target) - v.begin() + 1 << "\n";
          }
    }
}