#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
node *top=NULL;
bool isEmpty()
{
	if(top==NULL)
	{
		cout<<"Stack is empty"<<endl;
	return true;
	}
	else
	{
		return false;
	}
}
void push(int val)
{
	struct node *ptr=new node;
	ptr->data=val;
	ptr->link=top;
	top=ptr;
}
void pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		struct node *ptr=top;
		top=top->link;
		delete ptr;
	}
}
void showTop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"The top of the stack is"<<top->data<<endl;
	}
}
void display()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
	struct node *ptr=top;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->link;
	}
}
}
int main()
{
	int choice,flag=1,val;
	while(flag==1)
	{
		cout<<"Enter your choice: 1.push  2.pop  3.showTop  4.display  5.exit \n";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter the value"<<endl;
			cin>>val;
			push(val);
			break;
			case 2: pop();
			break;
			case 3: showTop();
			break;
			case 4:display();
			break;
			case 5: flag=0;
			break;
        }
	}
	return 0;
}

