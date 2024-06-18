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
int n,m;
cin>>n>>m;
int ans=0;
n--;m--;
ans+=2*min(n,m);
   int h=    max(n,m)-min(n,m);
   if(h%2){
    ans+=4*(h/2);
    ans++;
   }
   else 
   ans+=4*(h/2);
cout<<ans;
}