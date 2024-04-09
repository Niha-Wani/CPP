#include<iostream>
using namespace std;
struct node
{
	int data;
	node *leftchild;
	node *rightchild;
};
node *create(int value)
{
	node *temp=new node;
	temp->data=value;
	temp->leftchild=temp->rightchild=NULL;
	return temp;
}
node *insert(node *root,int value)
{
	if(root==NULL)
	{
		return create(value);
	}
	else if(value<root->data)
	{
		root->leftchild=insert(root->leftchild,value);
	}
	else
	{
		root->rightchild=insert(root->rightchild,value);
	}
	return root;
}
bool search(node *root,int value)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==value)
	{
		return true;
	}
	else if(value< root->data)
	{
		return search(root->leftchild,value);
	}
	else
	{
		return search(root->rightchild,value);
	}
}
void inorder(node *root)
{
	if(root==NULL)
	return;
	else
	{
		inorder(root->leftchild);
		cout<<root->data;
		inorder(root->rightchild);
	}
}
node *findmin(node *root)
{
	if(root==NULL)
	return NULL;
	else if(root->leftchild==NULL)
	{
		return root;
	}
	else
	{
	  return findmin(root->leftchild);
	}
}
node *deletion(node *root,int value)
{
	if(root==NULL)
	{
		cout<<"Node not found"<<endl;
		return root;
	}
	else if(value<root->data)
	{
		root->leftchild=deletion(root->leftchild,value);
	}
	else if(value>root->data)
	{
		root->rightchild=deletion(root->rightchild,value);
	}
	else
	{
		if(root->leftchild==NULL)
		{
			node *temp=root->rightchild;
			delete root;
			return temp;
		}
		else if(root->rightchild==NULL)
		{
			node *temp=root->leftchild;
			delete root;
			return temp;
		}
		node *minright=findmin(root->rightchild);
		root->data=minright->data;
		root->rightchild=deletion(root->rightchild,minright->data);
	}
	         return root;
 }
int main() 
{
	node *root=NULL;
	int choice,value,flag=1;
	while(flag==1)
	{
		cout<<endl<<"Enter your choice: 1.INSERT 2.SEARCH 3.DISPLAY 4.DELETION 5.EXIT "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter the value to insert"<<endl;
			cin>>value;
			root=insert(root,value);
			break;
			case 2: cout<<" Enter the value to search"<<endl;
			cin>>value;
			if(search(root,value))
			{
				cout<<"Value"<<value<<"found in tree"<<endl;
			}
			  else
			{
				cout<<"Value"<<value <<"not found "<<endl;
			}
			break;
			case 3: cout<<"The inorder traversal is"<<endl;
			inorder(root);
			break;
			case 4: cout<<"Enter the value to delete"<<endl;
			cin>>value;
			root=deletion(root,value);
			cout<<"Element deleted is "<<value<<endl;
			break;
			case 5: flag=0;
			break;
			default: cout<<"Invalid choice"<<endl;
			break;	
		}
	}
	return 0;
}
