#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
# include <bits/stdc++.h>
typedef long long ll;
void solve(ll n,ll k,ll & ans){
if(n==0){
    ans++;
   ans= ans%998244353;
    return;
}
if(n<0){
    return ;
}
for(ll i=1;i<=k;i++){
    solve(n-i,k,ans);
}
return;

}
int main(){
   ll n;
   ll k;
   cin>>n>>k;
   ll ans=0;
   solve(n,k,ans);
   cout<<ans%998244353;
}