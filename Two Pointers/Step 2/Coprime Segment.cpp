#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
struct stack{
    vector < ll > v{}, GCD{0};
    
    void push(ll num){
        v.push_back(num);
        GCD.push_back(__gcd(GCD.back(), num));
    }
    
    ll pop(){
        ll num = v.back();
        v.pop_back();
        GCD.pop_back();
        return num;
    }
    
    ll gcd(){
        return GCD.back();
    }
    
    bool empty(){
        return v.empty();
    }
    
};
 
::stack v1, v2;
 
void add(ll num){
    v1.push(num);
}
 
void remove(){
    if(v2.empty())
        while(!v1.empty())
            v2.push(v1.pop()); 
    v2.pop();
}
 
bool good(){
    return (__gcd(v1.gcd(), v2.gcd()) == 1);
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;        //cin >> t;
    while(t--){
         ll n;   cin >> n;
         vector < ll > v(n);   
         for(auto &i : v)          cin >> i;
         ll  j = 0, res = 1e18, i = 0;
         for( i = 0 ;i < n ;i ++){
               add(v[i]);
             while(good()){
                 remove();
                 res = min(res, i - j + 1)   ;
                 j++;
                 
             } 
             
         }
         cout << (res == 1e18 ? -1 : res);
    }
}