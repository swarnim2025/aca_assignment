#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
# include <bits/stdc++.h>
typedef long long ll;
void  solve(deque<int> &d,int * arr){ll sum =0;
   int n= d.size() ;
    for(auto i=d.begin();i<d.end();i++){
sum+=(ll)*i;
}
int k=n;
arr[0]=sum;
while(k--){
    if(k==0){
        break;
    }
    cout<<"K"<<" "<<k<<endl;
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
int temp= d.back()-d.front();
sum=sum-(ll)d.front()-(ll)d.back();
sum+=(ll)temp;
d.pop_back();
d.pop_front();
auto upper= upper_bound(d.begin(),d.end(),temp);
d.insert(upper,temp);
cout<<"mai sum hoon"<<sum<<endl;
arr[n-k]=sum;

}



}

int main(){
deque<int> d;
int n,q;
cin>>n>>q;
int temp;
for(int i=0;i<n;i++){
    cin>>temp;
d.push_back(temp);
}
sort(d.begin(),d.end());
int K[q];
int arr[n];
solve(d,arr);

for(int i=0;i<q;i++){
cin>>K[i];
cout<<arr[K[i]]<<" ";}}
