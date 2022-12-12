#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


ll n, k, Max = INT_MIN;
vector < ll > v;
 
bool is_good(ll m){
    if(m < Max)
        return false;
    ll seg = 1, sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        if(sum > m){
            sum = v[i];
            seg ++;
        }
    }
    return seg <= k;
}
 
ll BS(){
    ll l = 1, r = 1, best = 0;
    while(!is_good(r))         r *= 2;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(is_good(mid))
            r = mid - 1, best = mid;
        else    l = mid + 1;
    }
    return best;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> n >> k;
         v.resize(n);        
         for(auto &i : v)          cin >> i;
         for(auto &i: v)
             Max = max(Max, i);
         cout << BS();
    }
}