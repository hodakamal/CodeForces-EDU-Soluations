#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, s;        cin >> n >> s;
         vector < ll > w(n), v(n);    
         for(auto &i : w)          cin >> i;
         for(auto &i : v)          cin >> i;
         ll Max = 0, i = 0, j = 0, wt = 0, val = 0;
         while(i < n){
             wt += w[i];
             val += v[i];
             while(wt > s){
                 wt -= w[j];
                 val -= v[j];
                 j++;
             }
             Max = max(Max, val);
             i++;
         }
         cout << Max;
    }
}