// https://codeforces.com/problemset/problem/165/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
ll a[n],b[n];
ll res=0;
for(ll i=0; i<n; i++){
    cin>>a[i];
    cin>>b[i];
}
for(ll i=0; i<n; i++){
    ll p=0,q=0,r=0,s=0;
    for(ll j=0; j<n; j++){
        if(a[j]>a[i]&&b[j]==b[i])p=1;
        else if(a[j]<a[i]&&b[j]==b[i])q=1;
        else if(b[j]>b[i]&&a[j]==a[i])r=1;
        else if(b[j]<b[i]&&a[j]==a[i])s=1;
    }
    if(p==1&&q==1&&r==1&&s==1){
        res++;
    }

}
cout<<res;
return 0;
}