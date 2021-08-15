/* QUESTION-
Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.
*/

//My code
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool compare(char a,char b)
{
    
    return ((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
    
}
bool ispar(string x)
{
 stack<int> st;
 for(int i=0;i<x.length();i++)
 {
     if(x[i]=='('||x[i]=='{'||x[i]=='[')
       {
           st.push(x[i]);
        }
     if(x[i]==')'||x[i]=='}'||x[i]==']')
     {
         if(st.empty()==true)
           return false;
         
         if(compare(st.top(),x[i]))
         {
             st.pop();
         }
         else
           return false;
            
     }
     
 }
 return st.empty();
}
int main(){
IOS;
int t;
   
   cin>>t;
   while(t--)
   {
       string a;
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
return 0;
}