#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
          ll n, k, res = 0;
          cin >> n >> k;
          vector< ll > v(n);
          for(auto &i: v) cin>> i;
          ll  sum = 0, i = 0, j = 0; 
          for(;  i< n ; i++){
               sum += v[i];
               while(sum >= k){
                    res += n - i;
                    sum -= v[j++];
               }
          }
          cout << res;
    }
}