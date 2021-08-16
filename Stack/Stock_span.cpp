/* The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}. */


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
ll a[n];
for(ll i=0; i<n; i++){
    cin>>a[i];
}
ll span[n];
span[0]=1;
stack<int>s;
s.push(0);
for(ll i=0; i<n; i++){
    while(!s.empty()&&a[s.top()]<=a[i]){
        s.pop();
    }
    if(s.empty()){
        span[i]=i+1;
    }
    else{
        span[i]=i-s.top();
    }
    s.push(i);
}
for(ll j=0; j<n; j++){
    cout<<span[j]<<" ";
}
return 0;
}