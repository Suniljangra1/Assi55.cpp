// spiral order traversel 
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node *right;
    Node *left;
    int value;
    Node(int v)
    {
        value = v;
        left =NULL;
        right = NULL;
    }
 
};
   void Print_Level_order(Node *root)
    {
        if(root==NULL)
        return ;

        stack<Node*> q;
        q.push(root); 
       while(!q.empty())
      {
        Node* temp = q.top();
        cout<<temp->value<<" ";
        q.pop();
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
      }
    }
    void Level(Node *root)
    {
       
        if(root!=NULL)
        {
            cout<<root->value<<" ";
            Level(root->right);
            Level(root->left);

        }
    }
int main()
{
    Node *Root = new Node(10);
    Root->left = new Node(20);
    Root->left->left = new Node(40);
    Root->left->right = new Node(60);
        Root->right= new Node(30);

    Print_Level_order(Root);
     cout<<endl;
    Level(Root);
}
