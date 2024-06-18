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
    int t;
    cin>>t;
    while(t--){
    priority_queue<int> q;
    int n;int k;
    cin>>n>>k;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        q.push(temp);
    }
    while(k){
        if (k-q.top()>=0&&q.top()){
            int temp =q.top();
            k=k-temp;
            temp--;
            q.pop();
            q.push(temp);
            
        }
else {
break;}

    }
    cout<<q.top();
}}