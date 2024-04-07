#include<iostream>
using namespace std;
int top,cap=6;
class stack{
	private:
		int ar[50];
		public:
			stack();
		    void push(int item);
			int pop();
			void display();
			int peek();
			int size();
			
};
stack::stack()
{
	top=-1;
}
void stack::push(int item)
{
	if(top==cap-1)
	{
		cout<<"Stack is full"<<endl;
		exit(1);
	}
	else
	{
		top=top+1;
		ar[top]=item;
	}
}
stack::size()
{
	if(top==-1)
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		return(top+1);
	}
}
int stack::peek()
{
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		int item=ar[top];
		cout<<"The top of the stack is "<<item;
	}
}
int stack::pop()
{
	if(top==-1)
	{
		cout<<"Stack is empty"<<endl;
		return NULL;
	}
	else
	{
		int item=ar[top];
		top--;
		return item;
	}
}
void stack::display()
{
	for(int i=0;i<cap;i++)
	{
		cout<<ar[i]<<endl;
	}
}
int main()
{
	stack obj;
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.push(60);
	obj.push(70);
	//obj.push(80);
	obj.display();
	int s=obj.size();
	cout<<"The size of stack is "<<s<<endl;
	obj.peek();
	int p=obj.pop();
	cout<<endl<<"Element popped is "<<p<<endl;
	p=obj.pop();
	cout<<"Element popped is "<<p<<endl;
    p=obj.pop();
	cout<<"Element popped is "<<p<<endl;
    p=obj.pop();
	cout<<"Element popped is "<<p<<endl;
	p=obj.pop();
	cout<<"Element popped is "<<p<<endl;
	p=obj.pop();
	cout<<"Element popped is "<<p<<endl;
//	p=obj.pop();
//	cout<<"Element popped is "<<p<<endl;
	obj.peek();
	return 0;
}
