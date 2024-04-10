#include<iostream>
using namespace std;
struct nodequeue
{
	int data;
	nodequeue *link;
};
class queue
{
	private:
	nodequeue *front=NULL;
	nodequeue *rear=NULL;
	public:
	void insert(int val);
	void deletion();
	bool isempty();
	void display();
	void showfront();
	void showrear();	
};
bool queue::isempty()
{
	if(rear==NULL)
	{
	return true;
	}
	else
	{
	return false;
	}
}
void queue::insert(int val)
{
	nodequeue *ptr=new nodequeue();
	ptr->data=val;
	ptr->link=NULL;
	if(isempty())
	{
	    rear=ptr;
	    front=ptr;
	}
	else
	{
	     rear->link=ptr;
	     rear=ptr;
	}
}
void queue::deletion()
{
	if(isempty())
	{
	     cout<<"Queue is empty"<<endl;
	}
	else if(front==rear)
	{
	      cout<<"The deleted element from queue is "<<front->data;
	      delete(front);
	      front=rear=NULL;
	}
	else
	{
		nodequeue *ptr=front;
		front=front->link;
		cout<<"The deleted element is "<<ptr->data<<endl;
		delete(ptr);		
	}
}
void queue::showfront()
{
	if(isempty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<endl<<"The element at the front is "<<front->data;
	}
}
void queue::showrear()
{
	if(isempty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<endl<<"The element at the rear is "<<rear->data;
	}
}
void queue::display()
{
	if(isempty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		nodequeue *p=front;
		cout<<endl<<"The elements of the queue are "<<endl;
		while(p!=NULL)
		{
			cout<<" "<<p->data;
			p=p->link;
		}
	}
}
int main()
{
     queue obj;
	int choice,val,flag=1;
	while(flag==1)
	{
		cout<<endl<<"Enter your choice: 1.INSERT 2.DELETE 3.DISPLAY 4.SHOWFRONT 5.SHOWREAR 6.EXIT "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter the value"<<endl;
			cin>>val;
			obj.insert(val);
			break;
			case 2: obj.deletion();
			break;
			case 3: obj.display();
			break;
			case 4: obj.showfront();
			break;
			case 5: obj.showrear();
			break;
			case 6: flag=0;
			break;
			default: cout<<"Invalid case"<<endl;
			break;
		}
	}
    return 0;
}
