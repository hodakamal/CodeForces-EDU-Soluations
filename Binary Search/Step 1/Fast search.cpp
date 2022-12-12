#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
vector < int > v;
 
int LB(ll target, int l, int r) {
     
     int best = -1;
     while (r >= l) {
          ll mid = l + (r - l) / 2;
          if (v[mid] < target)
               l = mid + 1, best = mid;
          else
               r = mid - 1;
     }
     return best;
}

int UB(ll target, int l, int r) {
     
     int best = v.size();
     while (r >= l) {
          ll mid = l + (r - l) / 2;
          if (v[mid] > target)
               r = mid - 1, best = mid;
          else
               l = mid + 1;
     }
     return best;
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, q;        cin >> n;
         v.resize(n);
         for(auto &i : v)          cin >> i;
         cin >> q;
         sort(v.begin(), v.end());
         while( q-- ){
              ll target1, target2;      cin >> target1 >> target2;
              cout << UB(target2, 0 , n - 1) - LB(target1, 0 , n - 1) - 1 << " ";
          }
    }
}