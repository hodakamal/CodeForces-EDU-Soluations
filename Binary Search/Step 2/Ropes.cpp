#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll n, k;
vector < ll > v;
 
bool is_good(double m){
  ll sum = 0;
  for(auto &i: v){
    sum += (i / m);
  }
  return (sum >= k);
}

double BS(){
     double f = 0, l = 1, best = 0, error = 100;
     while(is_good(l))   l *= 2;
     
     while(error --){
             double m = f + (l - f) / 2;
             if(is_good(m))
                 best = m, f = m;
             else l = m;
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
         cout << fixed << setprecision (6) ;
         cout << BS();
    }
}