#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll n, x , y;
 
bool is_good(ll time){
    time -= min(x, y);
    return (((time / x) + (time / y) + 1) >= n);
}
 
ll BS(){
    ll l = 1, r = 1, best = min(x, y);
    while(!is_good(r))         r *= 2;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(is_good(mid))
            best = mid, r = mid - 1;
        else l = mid + 1;
    }
    return best;
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> n >> x >> y;
         cout << (n == 1 ? min(x, y) : BS());
    }
}