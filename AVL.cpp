#include <iostream>
using namespace std;
struct node
{
    int data;
    node* lc;
    node* rc;
    int height;
};
int getheight(node *root)
{
	if(root==NULL)
	return 0;
	else
	{
		return root->height;
	}
}
int getbf(node *root)
{
	if(root==NULL)
	return 0;
	else
	{
		return getheight(root->lc)-getheight(root->rc);
	}
}
node *create(int value)
{
    node *temp=new node;
    temp->data=value;
    temp->lc=temp->rc=NULL;
    temp->height=1;
    return temp;
}
node *rightrotation(node *y)
{
	node *x=y->lc;
	node *t=x->rc;
        x->rc=y;
        y->lc=t;
    y->height=max(getheight(y->lc),getheight(y->rc))+1;
    x->height=max(getheight(x->lc),getheight(x->rc))+1;
    return x;
}
node *leftrotation(node *x)
{
	node *y=x->rc;
	node *t=y->lc;
	y->lc=x;
	x->rc=t;
	x->height=max(getheight(x->lc),getheight(x->rc))+1;
	y->height=max(getheight(y->lc),getheight(y->rc))+1;
	return y;
}
node *insert(node *root,int value)
{
	if(root==NULL)
	return create(value);
	else if(value<root->data)
	{
		root->lc=insert(root->lc,value);
	}
	else if(value>root->data)
	{
		root->rc=insert(root->rc,value);
	}
	else
	{
		return root;
	}
	root->height=1+max(getheight(root->lc),getheight(root->rc));
	int bf=getbf(root);
	if(bf>1 && value<root->lc->data)
	{
	return rightrotation(root);
    }
	else if(bf<-1 && value>root->rc->data){
		return leftrotation(root);
	}
	else if(bf>1 && value>root->lc->data)
	{
		root->lc=leftrotation(root->lc);
		return rightrotation(root);
	}
	else if(bf<-1 && value<root->rc->data)
	{
		root->rc=rightrotation(root->rc);
		return leftrotation(root);
	}
	return root;
}
void inorder(node *root)
{
	if(root==NULL)
	return;
	else
	{
		inorder(root->lc);
		cout<<" "<<root->data;
		inorder(root->rc);
	}
}
int main()
{
	node *root=NULL;
	int value;
	cout<<"Enter the value"<<endl;
	cin>>value;
	root=insert(root,value);
	cout<<"Enter the value"<<endl;
	cin>>value;
	root=insert(root,value);
	cout<<"Enter the value"<<endl;
	cin>>value;
	root=insert(root,value);
	cout<<"Enter the value"<<endl;
	cin>>value;
	root=insert(root,value);
	cout<<"Enter the value"<<endl;
	cin>>value;
	root=insert(root,value);
	cout<<"Enter the value"<<endl;
	cin>>value;
	root=insert(root,value);
	cout<<"The inorder traversal is"<<endl;// in order traversal
	inorder(root);
	return 0;
}
