/* Given an array of distinct elements, find previous greater element for every element. If previous greater element does not exist, print -1.
Input : arr[] = {10, 4, 2, 20, 40, 12, 30}
Output :         -1, 10, 4, -1, -1, 40, 40 */


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
ll a[n];
stack<int>s;
for(ll i=0; i<n; i++)
{
    cin>>a[i];
}
s.push(a[0]);
cout<<-1<<" ";
for(ll i=1; i<n; i++){
    while(!s.empty()&&s.top()<a[i]){
        s.pop();
    }
    if(s.empty()){
        cout<<-1<<" ";
    }
    else{
        cout<<s.top()<<" ";
    }
    s.push(a[i]);
}
return 0;
}