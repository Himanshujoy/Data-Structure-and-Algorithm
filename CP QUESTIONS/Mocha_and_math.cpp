// Problem Link- https://codeforces.com/contest/1559/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
    ll res=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(i==0){
            res=a[i];
        }
        else{
            res=res&a[i];
        }
    }
    cout<<res<<endl;
}
return 0;
}