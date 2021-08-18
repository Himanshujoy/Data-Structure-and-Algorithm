// Question Link- https://codeforces.com/problemset/problem/205/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
pair<int,int>p[n];
for(ll i=0; i<n; i++){
    ll t;
    cin>>t;
    p[i].first=t;
    p[i].second=i+1;
}
sort(p,p+n);
if(p[0].first==p[1].first){
    cout<<"Still Rozdil";
}
else{
    cout<<p[0].second;
}
return 0;
}