#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, k;        cin >> n >> k;
         vector < ll > v(n);
         for(auto &i : v)          cin >> i;
         ll i = 0, j = 0, res = 0, sum = 0;
         for(int i = 0; i < n; i++){
             sum += v[i];
             while(sum > k)
                 sum -= v[j++];
             res += ((i - j + 1) * ((i - j + 1) + 1)) / 2;
         }
         cout << res;
    }
}