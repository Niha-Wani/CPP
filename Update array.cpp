#include<iostream>
using namespace std;
class array
{
	private:
		int ar[50],size,i,j,index;
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
				return 0;
			}
			void update()
			{
				cout<<"Enter the index you want to update"<<endl;
				cin>>index;
				if(index<0 || index>size)
				{
					cout<<"Invalid index"<<endl;
				}
				else
				{
					cout<<"Enter the value you want to insert"<<endl;
					cin>>ar[index];
					cout<<"Array updated successfully"<<endl;
				}
			}
			void display()
			{
				cout<<"The array elements are"<<endl;
				for(i=0;i<size;i++)
				{
					cout<<ar[i]<<endl;
				}
			}
};
int main()
{
	array obj;
	obj.getarray();
	obj.display();
	obj.update();
	obj.display();
	return 0;
}
