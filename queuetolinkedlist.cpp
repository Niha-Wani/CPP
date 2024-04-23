#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct queue 
{
    int data;
    struct queue *next;

};
void add_at_rear(struct queue **base)
{
    struct queue *n ,*temp;
    n=(struct queue*)malloc(sizeof(struct queue));
    cout<<"Enter Data :";
    cin>>n->data;
    n->next=NULL;
    if (*base==NULL)
    {
        *base=n;
    }
    else
    {
        temp=*base;
        while(temp->next !=NULL)
	{
            temp=temp->next;
        }
        temp->next=n;
    }
    cout<<"Element"<<" "<<n->data<<" "<<"has been added:";
}
void delete_at_front(struct queue **base)
{
	struct queue *temp;
  	temp=*base;
  	*base=temp->next;
        cout<<"Element deleted is "<<temp;
  	delete temp; 
}
int main()
{
    int c;
    struct queue *base=NULL;
    while (1)
    {
        cout<<"<1>to add at rear<2>to delete at front";
        cin>>c;
        if(c==1)
	{
            add_at_rear(&base);
        }
        else if (c==2)
	{
            delete_at_front(&base);
        }
    }
}
