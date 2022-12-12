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
        int i = 0 , j = 0;
        while(j < m){
            if(i < n && (a[i] < b[j]))
                i ++;
            else  cout << i <<" ", j++;
        }
    }
}