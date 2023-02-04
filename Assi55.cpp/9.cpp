// 
#include<iostream>
using namespace std;
int main()
{
    string s="ab##" , t= "c#d# ";
    int c=0,g=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]== '#')
        c++;
        
    }
     for(int i=0; i<t.length(); i++)
    {
        if(t[i]== '#')
        g++;
    }
    if(c == g)
    cout<<"true";
    else
    cout<<"false";
}