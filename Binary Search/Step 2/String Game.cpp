#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


string s, target;
vector < int > v;
map < ll, ll > mp;
bool is_good(ll m){
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(mp[(i+1)] > m && s[i] == target[j] && j < target.size())
            j++;
        if(j == target.size())
            break;
    }
    return (j == target.size());
}
 
ll BS(){
    ll l = 1, r = s.size(), best = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(is_good(mid))
            best = mid, l = mid + 1;
        else    r = mid - 1;
    }
    return best;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> s >> target;
         v.resize(s.size());    
         for(auto &i : v)     cin >> i;
         for(int i = 0; i < v.size(); i++)
             mp[v[i]] = i + 1;
         cout << BS();
    }
}