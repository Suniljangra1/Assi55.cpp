// Given a string  the task is find the bracket numbers :
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s = "((((()(";          // // just one left 🤦‍♂️😢😢😢 in first test case 
    int count=0;
    stack<int > r;
    for(int i=1; i<=s.length(); i++)
    {
        if(s[i]=='(')
        {
            count++;
            r.push(count);
        }
        else if(s[i]==')')
        r.push(count);
    }
    while(!r.empty())
    {
        cout<<r.top()<<" ";
        r.pop();
    }
}