#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll n, k;
vector < vector < ll > > v;
 
bool is_good(ll m){
    ll ballon = 0;
    for(int i = 0; i < n; i++){
        ll count = 0, time = m;
        while(time - v[i][0] >= 0){
            time -= v[i][0];
            count ++;
            if(count % v[i][1] == 0)
                time -= v[i][2];
        }
        ballon += count;
    }
    return (ballon >= k);
}
 
ll BS(){
    ll l = 0, r = 1, best = 0;
    while(!is_good(r))         r *= 2;
    while (l <= r){
        ll mid = l + (r - l) /2;
        if(is_good(mid))
            r = mid - 1, best = mid;
        else l = mid + 1;
    }
    return best;
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> k >> n;
         v.resize(n, vector < ll > (3));
         for(auto &i: v)
             for(auto &j: i)
                 cin >> j;
        ll t = BS();
        cout << t << "\n";
        vector < ll > res(n);
        for(int i = 0; i < n; i++){
             ll count = 0, time = t;
             bool finish = false;
             while(time - v[i][0] >= 0){
                 time -= v[i][0];
                 count ++;
                 k--;
                 if(k == 0){
                     finish = true;
                     break;
                 }
                 if(count % v[i][1] == 0)
                     time -= v[i][2];
             }
             res[i] = count;
             if(finish)    break;
         }
         for(auto &i : res)        cout << i << " ";
    }
}