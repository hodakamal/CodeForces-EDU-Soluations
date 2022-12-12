#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll w, h, n;

bool good(ll m){
  return (m / w) * (m / h) >= n;
}
ll BS(){
       ll l = 1, r = 1, best = 0;
       while(!good(r))        r *= 2;
       while(l <= r){
         ll mid = l + (r - l) / 2;
         (good(mid) ? r = mid - 1 , best = mid: l = mid + 1);
       }
       return best;
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> w >> h >> n;
         cout << BS();
    }
}