/* Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.
Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5 8 8 */


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
ll n;
cin>>n;
ll k;
cin>>k;
queue<int>q;
stack<int>s;
for(ll i=0; i<n; i++){
    ll temp;
    cin>>temp;
    q.push(temp);
}
for(ll j=0; j<k; j++){
    s.push(q.front());
    q.pop();
}
while(s.empty()!=true){
    q.push(s.top());
    s.pop();
}
for(ll j=0; j<n-k; j++){
    ll val=q.front();
    q.pop();
    q.push(val);
}
while(q.empty()!=true){
    cout<<q.front()<<" ";
    q.pop();
}
return 0;
}