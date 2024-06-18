#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
# include <bits/stdc++.h>
typedef long long ll;

int main(){

ll n,k;
cin>>n>>k;
ll nums[n];
for(int i=0;i<n;i++)
cin>>nums[i];
ll sum[n];
ll ans=n+1;
deque<ll> d;
for(int i=0;i<n;i++){

    if(i==0)
    sum[i]=nums[i];
    else 
sum[i]=sum[i-1]+nums[i];
if(sum[i]>=k)
ans= ans>i+1?i+1:ans;
while(!d.empty()&&sum[i]<sum[d.back()]){
    d.pop_back();
}

// if(!d.empty()&&sum[d.back()]-sum[d.front()]>=k)
// {    ans=d.back()-d.front()+1;}


    while(!d.empty()&&sum[i]-sum[d.front()]>=k){
        // cout<<sum[i]<<" "<<sum[d.back()]<<endl;
        ans=min(ans,i-d.front());
      d.pop_front() ;
    }

d.push_back(i);


}
if(ans==n+1)
cout<<-1;
else 
cout<<ans;}

