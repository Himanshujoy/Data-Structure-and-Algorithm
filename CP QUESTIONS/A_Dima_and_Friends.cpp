// Problem Link- https://codeforces.com/problemset/problem/272/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
ll k=n+1;
ll a[n];
ll sum=0;
vector<int>v;
for(ll i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
}
for(ll i=1; i<6; i++){
    if((sum+i)%k!=1){
        v.push_back(i);
    }
}
cout<<v.size();

return 0;
}