#include<iostream>
using namespace std;
struct node{
	int data;
	node *leftchild;
	node *rightchild;
	node *create();
};
node *create()
{
	int x;
	node *temp=new node;
	cout<<"Enter the data"<<endl;
	cin>>x;
	if(x==-1)
	{
		return 0;
	}
	else
	{
		temp->data=x;
		cout<<"Enter the left child of "<<x<<" and press -1 for no child"<<endl;
		temp->leftchild=create();
		cout<<"Enter the right child of "<<x<<" and press -1 for no child"<<endl;
		temp->rightchild=create();
		return temp;
	}
}
	void preorder(node *temp)
{
		if(temp==NULL)
		return;
		else
		{
			cout<<temp->data;
			preorder(temp->leftchild);
			preorder(temp->rightchild);
		}	
}
	void inorder(node *temp)
{
		if(temp==NULL)
		return;
		else
		{
			inorder(temp->leftchild);
			cout<<temp->data;
			inorder(temp->rightchild);
		}
}
	void postorder(node *temp)
{
		if(temp==NULL)
		return;
		else
		{
			postorder(temp->leftchild);
			postorder(temp->rightchild);
			cout<<temp->data;
		}
}
int main()
{
	int flag=1,choice;
	node *temp;
	while(flag==1)
	{
		cout<<" Enter your choice:  1.CREATION 2.PREORDER 3.INORDER 4.POSTORDER 5.EXIT "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: temp=create();
			break;
			case 2: preorder(temp);
			break;
			case 3: inorder(temp);
			break;
			case 4: postorder(temp);
			break;
			case 5: flag=0;
			break;
			default: cout<<"Invalid choice"<<endl;
			break;
		}
	}
    return 0;
}
