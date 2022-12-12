#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


ll nb, ns, nc, pb, ps, pc, r;
map < char, ll > mp;
 
bool is_good(ll m){
    ll b = max((ll)0, (m * mp['B']) - nb);
    ll s = max((ll)0, (m * mp['S']) - ns);
    ll c = max((ll)0, (m * mp['C']) - nc);
    return ((b * pb) + (s * ps) + (c * pc)) <= r;
}
 
ll BS(){
    ll l = 1, r = 1, best = 0;
    while(is_good(r))    r*= 2;
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
         string s;        cin >> s;
         for(auto &i: s)
             mp[i] ++;
         cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
         cout << BS();
    }
}