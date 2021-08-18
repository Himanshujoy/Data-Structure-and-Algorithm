// Question Link- https://codeforces.com/problemset/problem/139/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
IOS;
ll n;
cin>>n;
ll res=0;
ll a[7];

for(ll i=0; i<7; i++){
    cin>>a[i];
}
ll sum=a[0];
while(sum<n){
    res++;
    res=res%7;
    sum=sum+a[res];
}
cout<<res+1;
return 0;
}