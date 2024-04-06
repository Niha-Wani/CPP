#include<iostream>
using namespace std;
class matrix{
	private:
		int M1[3][3],M2[3][3],Add[3][3],i,j,size;
		public:
			void getmatrix();
			void dispaly();
			void addition();
};
void matrix::getmatrix()
{
	cout<<"Enter the size of matrix"<<endl;
	cin>>size;
	cout<<"Enter the elements for M1"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cin>>M1[i][j];
		}
	}
	cout<<"The elements of M1 are"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<M1[i][j]<<ends;
		}
	}
	cout<<endl<<"Enter the size of matrix"<<endl;
	cin>>size;
	cout<<"Enter the elements for M2"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cin>>M2[i][j];
		}
	}
	cout<<"The elements of M2 are"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<M2[i][j]<<ends;
		}
	}
}
void matrix::addition()
{
	cout<<endl<<"The addition of M1 and M2 is"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			Add[i][j]=M1[i][j]+M2[i][j];
		}
	}
}
void matrix::dispaly()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<Add[i][j]<<endl;
		}
	}
}
int main()
{
	matrix obj;
	obj.getmatrix();
	obj.addition();
	obj.dispaly();
	return 0;
}
