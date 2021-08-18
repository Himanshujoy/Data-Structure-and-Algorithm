// Question Link- https://codeforces.com/problemset/problem/450/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,m;
cin>>n>>m;
queue<int> q;
queue<int> q1;
for(int i=0;i<n;i++)
{
    int j;
    cin>>j;
    q.push(j);
    q1.push(i+1);
}
while(q.size()!=1)
{
   if(q.front()<=m)
   {
       q.pop();
       q1.pop();
   }
   else{
       int k=q.front()-m;
       q.pop();
       q.push(k);
       int l=q1.front();
       q1.pop();
       q1.push(l);
   }
}
cout<<q1.front();

return 0;
}