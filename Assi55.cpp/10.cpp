// two stack in one array
#include<iostream>
using namespace std;
class twoStack
{
    int *array;
    int top1,top2;
    int size;
    public:
    twoStack(int v)
    {
        array = new int[v];
        size = v;
        top1 =-1;
        top2= v;

    }
    void push_top1(int data)
    {
        if(top1 > top2-1)
            cout<<"over flow ";
        else
            array[++top1] = data;
            
    }
    void push_top2(int data)
    {
        if(top1 < top2-1)
        array[--top2] = data;
        else
        cout<<"over flow ";
            
    }
    int pop1()
    {
        if(top1 >=0 )
        {
            top1--;
            return array[top1+1];
        }
        else 
        cout<<"under flow ";
    }
    int pop2()
    {
        if(top2 < size )
        {
            return array[top2];
            top2--;
            
        }
        else {
            
            cout<<"under flow ";
        }
        
    }
};
int main()
{
    twoStack s(10);
    s.push_top1(5);
    s.push_top1(7);
    s.push_top2(9);
    s.push_top2(4);
    cout<<"delete into sack 1 is -> "<< s.pop1();
    cout<<"\ndelete into sack 2 is -> "<< s.pop2();
}