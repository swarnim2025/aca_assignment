#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
# include <bits/stdc++.h>
typedef long long ll;
 int c=0;
void solve(vector<pair<ll,ll>>& p,int i,ll orcount,ll r,ll k,vector<ll>&ans ){c++;
    // cout<<" i m solve"<<endl;
    // cout<<r<<" "<<orcount<<endl;
    if(i>=p.size()&&r<=k){
    ans.push_back((ll)orcount);
    return;}
    if(r>k||i>=p.size())
    return ;
 for(int j=i;j<p.size();j++){
    solve(p,j+1,orcount,r,k,ans);
    r+=p[j].first;
    orcount +=p[j].second;
  solve(p,j+1,orcount,r,k,ans);
 }
return;
}





int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
   vector< pair <ll,ll>> p(n);
    int temp1,temp2;
    for(int i=0;i<n;i++){
cin>>temp1>>temp2;
p[i].first=temp1;
p[i].second=temp2;
    }

    vector<ll> ans;
    solve(p,0,0,0,k,ans);
    ll maxu= -1;
for(int i=0;i<ans.size();i++)
maxu=max(ans[i],maxu);
// cout<<ans[i]<<endl;}
cout<< maxu<<endl;


// cout<<" count"<<c;
}}