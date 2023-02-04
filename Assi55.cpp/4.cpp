// sort a stack 
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s,r;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);
    int count =0;
    while(!s.empty())
    {
        
        int v = s.top();
        s.pop();
        while(!r.empty() && r.top()>v)
        {
            s.push(r.top());
            r.pop();
           
        }
        r.push(v);
    }
    cout<<count;
    while(!r.empty())
    {
        cout<<r.top()<<" ";
        r.pop();
    }
}