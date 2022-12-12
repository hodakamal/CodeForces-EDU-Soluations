#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


ll n;
vector < pair < ll, ll > > v;
 
bool is_good(double m){
    double Max_l = -1e18, Min_r = 1e18;
    for(auto& [i, j] : v){
        Max_l = max(Max_l, i - (m * j));
        Min_r = min(Min_r, i + (m * j));
    }
    return Max_l <= Min_r;
}
 
double BS(){
    double l = 0, r = 1, best = 0;
    while(!is_good(r))    r *= 2;
    while((r - l) >= EPS){
        double mid = l + (r - l) / 2;
        if(is_good(mid))
            r = mid, best = mid;
        else
            l = mid;
    }
    return best;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> n;
         v.resize(n);    
         for(auto &[i, j]: v)
             cin >> i >> j;
         cout << fixed << setprecision(6);
         cout << BS();
    }
}