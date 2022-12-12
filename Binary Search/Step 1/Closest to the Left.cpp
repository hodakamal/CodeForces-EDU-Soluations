#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector < int > v;

int LB(ll target, int l, int r) {
     
     int best = 0;
     while (r >= l) {
          ll mid = l + (r - l) / 2;
          if (v[mid] <= target)
               l = mid + 1, best = mid + 1;
          else
               r = mid - 1;
     }
     return best;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, q;        cin >> n >> q;
         v.resize(n);
         for(auto &i : v)          cin >> i;
         while( q-- ){
              ll target;      cin >> target;
              cout << LB(target, 0, n - 1) << "\n";
          }
    }
}