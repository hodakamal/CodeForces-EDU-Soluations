#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


ll n, k, Min = INT_MAX;
vector < ll > v;
 
bool is_good(ll m){
    if(m < Min)
        return false;
    ll seg = 1, sum = 0;
    for(int i = 1; i < n; i++){
        sum += (v[i] - v[i - 1]);
        if(sum >= m){
            sum = 0;
            seg ++;
        }
    }
    return seg >= k;
}
 
ll BS(){
    ll l = 1, r = 1e17, best = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(is_good(mid))
            l = mid + 1, best = mid;
        else    r = mid - 1;
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
         for(int i = 1; i < n; i++)
             Min = min(Min, v[i] - v[i - 1]);
         cout << BS();
    }
}