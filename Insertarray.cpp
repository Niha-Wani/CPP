#include<iostream>
using namespace std;
class array
{
	private:
	   int ar[70],size,pos,element,i;
	public:
	  int getarray()
	{
	     cout<<"Enter the size of array"<<endl;
	     cin>>size;
	     cout<<"Enter the elements"<<endl;
	     for(i=0;i<size;i++)
		{
			cin>>ar[i];
		}
	 }	
	   int insertarray()
	{
				cout<<"Enter the position you want to insert"<<endl;
				cin>>pos;
				cout<<"Enter the element"<<endl;
				cin>>element;
				for(i=size-1;i>=pos;i--)
				{
					ar[i+1]=ar[i];
			    }
			    ar[pos]=element;
				}
				void display()
				{
					cout<<"The new elements are"<<endl;
					for(i=0;i<size+1;i++)
					{
						cout<<ar[i];
						cout<<" ";
					}
				}
};
int main()
{
	array obj;
	obj.getarray();
	obj.insertarray();
	obj.display();
	return 0;
}

