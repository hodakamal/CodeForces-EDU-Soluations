#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


ll n, k;    
vector < ll > v;
 
bool is_good(ll m){
     ll sum = 0;
     for(auto &i: v)
        sum += min(m, i);
     return (sum >= (m * k));
}
 
ll BS(){
    ll l = 1, r = 1, best = 0;
    while(is_good(r))    r *= 2;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(is_good(mid))
            l = mid + 1, best = mid;
        else r = mid - 1;
    }
    return best;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> k >> n;
         v.resize(n);        
         for(auto &i: v)      cin >> i;
         cout << BS();
    }
}