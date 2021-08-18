/*
 Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.
*/


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
stack<int>s;
s.push(a[n-1]);
cout<<-1<<" ";
for(ll i=n-2; i>=0; i--){
    while(!s.empty()&&s.top()<=a[i]){
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