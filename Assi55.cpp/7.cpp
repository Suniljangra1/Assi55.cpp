// impliment of stack 
#include<iostream>
using namespace std;
class stack
{
    int array[100];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(int data)
    {
        if(top==99)
        cout<<"over flow stack ";
        top++;
        array[top]=data;
    }
    int pop()
    {
         if(top==99 || top==-1)
        cout<<"we can not do any pop operation  ";
        else
        top--;
        return array[top+1];
    }
    int top_()
    {
        return array[top];
    }
    int isEmpty()
    {
        if(top==-1)
        return 1;
        else 
        return 0;
    }
    int isFull()
    {
        if(top==99)
        return 1;
        else
        return 0;
    }
    int getMin()
    {
        int min;
        for(int i=0; i<top; i++)
        {
            if(array[i]<array[i+1])
             min = array[i];
        }
        return min;
    }
};
int main()
{
    stack r;
    r.push(18);
    r.push(19);
    r.push(29);
    r.push(15);
    r.push(16);
    cout<<"Minimum Element in the stack is  -> "<<r.getMin()<<endl;
    while(!r.isEmpty())
    {
        cout<<r.top_()<<" ";
        r.pop();
    }
}