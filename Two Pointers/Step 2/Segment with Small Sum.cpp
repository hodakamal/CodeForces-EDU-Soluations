#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
          ll n, s, sum = 0, Max = INT_MIN;
          cin >> n >> s;
          vector < ll > v(n);
          for( auto &i: v)  cin >> i;
          ll i = 0, j = 0;
          while(i < n){
              sum += v[i];
              while(sum > s){
                    sum -= v[j];
                    j++;
              }
              Max = max(Max, i - j + 1);
              i++;
          }
          cout << Max;
    }
}