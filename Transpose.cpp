#include<iostream>
using namespace std;
class matrix{
	private:
		int M1[3][3],trans[3][3],i,j,size;
		public:
			void getmatrix();
			int transpose();
			void display();
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
}
int matrix::transpose ()
{
	cout<<endl<<"The transpose matrix is"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			trans[j][i]=M1[i][j];
		}
	}
	return 0;
}
void matrix::display()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<trans[i][j];
		}
	}
}
int main()
{
	matrix obj;
	obj.getmatrix();
	obj.transpose();
	obj.display();
	return 0;
}
