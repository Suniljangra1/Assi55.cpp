// compiler bracket work in program :
#include<iostream>
#include<stack>
using namespace std;
bool Stack_Find(string str)
{
    stack<char> temp;
    for(int i=0; i<str.length(); i++)
    {
        if(temp.empty())
        {
            temp.push(str[i]);
        }
        else if( (temp.top()=='{' && str[i]== '}')
        || (temp.top()== '(' && str[i]== ')')
        || (temp.top()=='[' && str[i]==']') )
        {
            temp.pop();
        }
        else
        {
            temp.push(str[i]);
        }
    }
    if(temp.empty())
    return true;
    else
    return false;
}
int main()
{
    string st = "{()[]}";
    if(Stack_Find(st))
    cout<<"Stack Balanced ";
    else 
    cout<<"Stack Not Balanced ";

}