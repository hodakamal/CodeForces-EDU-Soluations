#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         int n, k;        cin >> n >> k;
         vector < int > v(n);    
         for(auto &i : v)     cin >> i;
         map < int, int > mp;
         int i = 0, j = 0;
         ll res = 0;
         while(i < n){
             mp[v[i]] ++;
             while(mp.size() > k){
                 mp[v[j]] --;
                 if(mp[v[j]] == 0)
                     mp.erase(v[j]);
                 j++;
             }
            res += (i - j) + 1;
            i++;
         }
         cout << res ;
    }
}