/* Given a vector V of n elements. Return the vector containing prime numbers that are at prime index(1-indexing). */


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Checkprime(int n)
{
    if(n == 1)
    return 0;
    if(n==2)
    return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
IOS;
ll t;
cin>>t; 
while(t--){
    vector<int>v;
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int>res;
    for(ll i=0; i<v.size(); i++){
        if(Checkprime(i+1)&&Checkprime(v[i])){
            res.push_back(v[i]);
        }
    }
    for(ll j=0; j<res.size(); j++){
        cout<<res[j]<<" ";
    }
    cout<<endl;
}
return 0;
}