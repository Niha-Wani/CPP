#include<iostream>
using namespace std;
class sparse{
	private:
		int ar[10][10],sparse[20][20],k=1,i,j,row,column;
		public:
			void getmatrix();
			void sparsematrix();
			void display();
};
void sparse::getmatrix()
{
	cout<<"Enter the row size"<<endl;
	cin>>row;
	cout<<"Enter the column size"<<endl;
	cin>>column;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cin>>ar[i][j];
		}
	}
}
void sparse::sparsematrix()
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(ar[i][j]!=0)
			{
				sparse[k][0]=i;
				sparse[k][1]=j;
				sparse[k][2]=ar[i][j];
				k++;
			}
		}
	}
	sparse[0][0]=row;
	sparse[0][1]=column;
	sparse[0][2]=k-1;
}
void sparse::display()
{
	cout<<endl<<"The sparse matrix is"<<endl;
	for(i=0;i<=sparse[0][2];i++)
	{
		cout<<"\n";
		for(j=0;j<column;j++)
		{
			cout<<" "<<sparse[i][j]<<" ";
		}
	}
}
int main()
{
	sparse obj;
	obj.getmatrix();
	obj.sparsematrix();
	obj.display();
	return 0;
}
