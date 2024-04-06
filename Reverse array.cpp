#include<iostream>
using namespace std;
class array{
    private:
	int ar[50],i,temp,j,size;
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
		int reverse()
		{
			for(i=0,j=size-1;i<size/2;i++,j--)
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
			cout<<"Array reversed successfully"<<endl;
			return 0;
		}
		void display()
		{
			cout<<"The array elements after reversal are"<<endl;
			for(i=0;i<size;i++)
			{
				cout<<ar[i]<<endl;
			}
			cout<<endl;
		}
};
int main()
{
	array obj;
	obj.getarray();
	obj.display();
	obj.reverse();
	obj.display();
	return 0;
}
