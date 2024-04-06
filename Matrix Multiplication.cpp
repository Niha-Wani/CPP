#include<iostream>
using namespace std;
class matrix{
	private:
		int M1[3][3],M2[3][3],Mul[3][3],i,j,k,size;
		public:
			void getmatrix();
			void multiplication();
			void display();
};
void matrix::getmatrix()
{
	cout<<"Enter the size for M1"<<endl;
	cin>>size;
	cout<<"Enter the elements for M1"<<endl;
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				cin>>M1[i][j];
			}
		}
		cout<<"The elements of matrix M1 are"<<endl;
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				cout<<M1[i][j]<<ends;
			}
		}
	cout<<endl<<"Enter the size for M2"<<endl;
	cin>>size;
	cout<<"Enter the elements for M2"<<endl;
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				cin>>M2[i][j];
			}
		}
		cout<<"The elements of matrix M2 are"<<endl;
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				cout<<M2[i][j]<<ends;
			}
		}	
}
void matrix::multiplication()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			Mul[i][j]=0;
			for(k=0;k<size;k++)
			{
				Mul[i][j]=M1[i][j]*M2[i][j];
			}
		}
	}
}
void matrix::display()
{
	cout<<endl<<"The multiplication of M1 and M2 is"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<Mul[i][j];
			cout<<" ";
		}
	}
}
int main()
{
	matrix obj;
	obj.getmatrix();
	obj.multiplication();
	obj.display();
	return 0;
}
