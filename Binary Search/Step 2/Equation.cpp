#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define EPS 1e-6


double c;
 
bool is_good(double m){
    return (sqrt(m) + (m * m)) >= c;
}

double BS(){
     double l = 0, r = 2, best = 0;
     while(!is_good(r))        r *= 2;
     while((r - l) >= EPS){
             double mid = l + (r - l) / 2;
             if(is_good(mid))
                 best = mid, r = mid;
             else l = mid;
     }
     return best;
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         cin >> c;
         cout << fixed << setprecision (15);
         cout << BS();
    }
}