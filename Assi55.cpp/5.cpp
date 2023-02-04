// reverse the string using stack 
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s="thanku so much sir ",t=" ";
    stack<string> r;
    for(int i=0; i<=s.length()+1; i++)
    {
        if(s[i]==' ')
        {
            r.push(t);
            t = " ";
        }
        else 
        t = t + s[i];
    }
    while(!s.empty())
    {
        cout<<r.top()<<" ";
        r.pop();
    }
}