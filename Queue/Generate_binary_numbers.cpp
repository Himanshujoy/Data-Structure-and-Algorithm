/* Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

Example 1:

Input:
N = 2
Output: 
1 10 */


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
IOS;
int n;
cin>>n;
queue<string>q;
string s;
string s1;
q.push("1");
while(n--){
    string s=q.front();
    cout<<q.front()<<" ";
    q.pop();
    s1=s;
    q.push(s.append("0"));
    q.push(s1.append("1"));
}
return 0;
}