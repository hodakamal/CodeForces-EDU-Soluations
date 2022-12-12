#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
        int n, m;     cin >> n >> m;
        vector < int > a(n), b(m);
        for(auto &i : a)    cin >> i;
        for(auto &i : b)    cin >> i;
        ll i = 0 , j = 0, k = 0, res = 0;
        while(i < n){
            while(j < m && b[j] < a[i])   j++;
            while(k < m && b[k] <= a[i])   k++;
            res += k - j;
            i ++;
        }
        cout << res;
    }
}