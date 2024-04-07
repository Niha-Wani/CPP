#include<iostream>
using namespace std;
int size=7;
//#define size 100
class qarray{
	private:
		int queue[7];
		 int front=-1;
		 int rear=-1;
		public:
			void insert(int val);
			int deletion();
			bool isfull();
			bool isempty();
			void display();
			int getfront();
};
bool qarray::isempty(){
	if(front==-1 || front>rear)
	{
		return true;
	}
	else{
		return false;
	}
}
bool qarray::isfull(){
	if(rear==size-1)
	{
		return true;
	}
	else 
	return false;
}
void qarray::insert(int val){
	if(isfull()){
		cout<<"Queue is full"<<endl;
	}
	else if(isempty())
	{
		front++;
		rear++;
		queue[rear]=val;
	}
	else{
		rear++;
		queue[rear]=val;
	}
}
int qarray::deletion(){
	if(isempty()){
		cout<<"Queue is empty"<<endl;
	}
	else{
		int p=queue[front];
		front++;
		return p;
	}
}
void qarray::display(){
	if(isempty()){
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<"The elements of queue are  ";
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i];
		}
	}
	
}
int qarray::getfront(){
	if(isempty()){
		cout<<"Queue is empty"<<endl;
	}
	else{
		int p;
		p=queue[front];
		cout<<"The element at front is "<<p;
	}
}
int main(){
	qarray obj;
	int choice,val,flag=1;
	while(flag==1){
		cout<<endl<<"Enter your choice: 1.INSERT 2.DELETE 3.DISPLAY  4.GETFRONT 5.EXIT"<<endl;
		cin>>choice;
		switch(choice){
			case 1: cout<<"Enter the value"<<endl;
			cin>>val;
			obj.insert(val);
			break;
			case 2: obj.deletion();
			//cout<<"The deleted element is"<<q<<endl;
			break;
			case 3: obj.display();
			break;
			case 4: obj.getfront();
			break;
			case 5: flag=0;
			break;
			default : cout<<"Invalid case"<<endl;
			break;
			
		}
	}
	return 0;
	
}
