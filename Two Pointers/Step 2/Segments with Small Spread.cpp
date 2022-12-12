#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
deque < ll > Min, Max;
 
void add(ll num){
    while(!Min.empty() && Min.back() > num) 
        Min.pop_back();
    Min.push_back(num);
 
    while(!Max.empty() && Max.back() < num)
        Max.pop_back();
    Max.push_back(num);
}
 
void remove(ll num){
    if(!Min.empty() && Min.front() == num)
        Min.pop_front();
 
    if(!Max.empty() && Max.front() == num)
        Max.pop_front();
}
 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n, k;    cin >> n >> k;
         vector < ll > v(n);    
         for(auto &i : v)          cin >> i;
         ll i = 0, j = 0, res = 0;
         while(i < n){
             add(v[i]);
             while(Max.front() - Min.front() > k)
                 remove(v[j++]);
              res += i - j + 1;
             i++;
         }
         cout << res;
    }
}