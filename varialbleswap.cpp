#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp=*x;
    *x-*y;
    *y=temp;
}
int main()
{
    int a=5;
    int b=10;
    cout<<"before swap:a="<<a<<",b ="<<b<<endl;
    swap(&a,&b);
    cout<<"After swap:a="<<a<<",b ="<<b<<endl;
    return 0;
}
