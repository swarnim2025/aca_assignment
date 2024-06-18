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
    
    int n;
    cin>>n;
    vector<pair<int,int>> p;
   
    
    for(int i=0;i<n;i++){ string temp;int sum=0;
    int count=0;
        cin>>temp;
        count=temp.size();
        for(int i=0;i<temp.size();i++)
        sum+=(temp[i]-'0');
p.push_back(make_pair(count,sum));
    }
sort(p.begin(),p.end());
auto it=p.begin();
int ans;
while(it->first<7){
    if(binary_search(it+1,p.end(),make_pair(12-(it->first),50-(it->second))))
ans++;
it++;
}
// for(int i=0;i<p.size();i++)
// cout<<p[i].first<<" "<<p[i].second<<endl;
cout<<2*ans;}








