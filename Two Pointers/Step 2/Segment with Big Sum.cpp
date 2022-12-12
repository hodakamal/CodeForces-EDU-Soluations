#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
          ll n, k, c = 0, s = 0, Min = INT_MAX;
          cin >> n >> k;
          vector < ll > v(n);
          bool find = false;
          for(auto &i: v)     cin >> i;
          ll l = 0, i = 0;
          for(; i < n ; i++){
               s += v[i];
               while(s - v[l] >= k){
                    s -= v[l];
                    l++;
               }
               if(s >= k){
                    Min = min(Min , i - l + 1);
                    find = true;
               }
         }
         cout << (!find ? -1 : Min);
    }
}