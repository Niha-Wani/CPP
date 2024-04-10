#include<iostream>
using namespace std;
class array
{
    private:
	int ar[50],i,size;
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
		 int largest()
		 {
		 	for(i=1;i<size;i++)
		 	{
		 		if(ar[0]<ar[i])
		 		{
		 			ar[0]=ar[i];
				 }
			 }
			 cout<<"The largest element is "<<ar[0]<<endl;
			 return 0;
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
	obj.largest();
	return 0;
}
