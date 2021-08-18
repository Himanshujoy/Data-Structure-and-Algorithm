/* You are given two arrays a[] (integer) and b[] (char). The ith value of a[] corresponds to the ith value of b[]. Sort the array b[] with respect to a[].
Input:
a[] = {3, 1, 2}
b[] = {'G', 'E', 'K'}
Output:
E K G */


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
ll a[n];
char b[n];
pair<int,char>p[n];
for(ll i=0; i<n; i++){
    cin>>a[i];
    p[i].first=a[i];
}
for(ll i=0; i<n; i++){
    cin>>b[i];
    p[i].second=b[i];
}
sort(p,p+n);
for(ll i=0; i<n; i++){
    cout<<p[i].second<<" ";
}
return 0;
}