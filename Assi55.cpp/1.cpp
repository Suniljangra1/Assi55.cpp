// Given a stack with push(), pop(), empty(), opertaion delete the middle element of the stack without using any additional data structure
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int middle = (s.size()+1)/2;
    while(!s.empty())
    {
        if(s.top()!= middle)
        cout<<s.top()<<" ";
        s.pop();
    }
    
}