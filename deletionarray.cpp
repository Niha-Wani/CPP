#include<iostream>
using namespace std;
class array
{
	private:
	    int ar[70],i,pos,size,count;
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
		cout<<"The array elements are"<<endl;
		for(i=0;i<size;i++)
			{
				cout<<ar[i]<<endl;
			}
				return 0;
			}
	      void deletion()
		{
			cout<<"Enter the position you want to delete"<<endl;
			cin>>pos;
			for(i=0;i<size;i++)
			{
			     if(i==pos)
			      {
				for(int j=i;j<size-1;j++)
				{
					ar[j]=ar[j+1];
				}
				      count++;
				}
			 }
			      if(count==0) 
				{
					cout<<"Element not found"<<endl;
				}
				else
				{
					cout<<"Element deleted successfully"<<endl;
				}
			}
		void display()
		{
		    for(i=0;i<size-1;i++)
         		{
		           cout<<ar[i];
			}
		}
};
int main()
{
	array obj;
	obj.getarray();
	obj.deletion();
	obj.display();
	return 0;
}
