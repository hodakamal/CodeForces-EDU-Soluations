#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector < int > v;

bool BS(ll target, ll l, ll r) {
     while (r >= l) {
          ll mid = l + (r - l) / 2;
         
          if (v[mid] == target)     return true;
          else if (v[mid] < target)      l = mid + 1;
          else       r = mid - 1;
     }
     return false;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, q;        cin >> n >> q;
         v.resize(n);
         for(auto &i : v)          cin >> i;
         while(q--){
               ll target;      cin >> target;
               cout << (BS(target, 0, n - 1) ? "YES\n" : "NO\n"); 
         }
    }
}