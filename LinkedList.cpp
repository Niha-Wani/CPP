#include<iostream>
#include<stdio.h>
using namespace std;
struct list
{
    int data;
    struct list *next;
};
void add (struct list **base)
{
    struct list *n ,*temp;
    n=(struct list*)malloc(sizeof(struct list));
    cout<<"Enter Data:";
    cin>>n->data;
    n->next=NULL;
    if (*base==NULL)
    {
        *base=n;
    }
    else
    {
        temp=*base;
        while (temp->next!=NULL)
	{
            temp=temp->next;
        }
        temp->next=n;    
    }
}
void display(struct list *base)
{
    if (base ==NULL)
    {
        cout<<"List is Empty::";
    }
    else
    {
        while(base!=NULL)
	{
            cout<<" "<<base->data;
            base=base->next;
        }
    }
}
void count (struct list *base)
{
    int c=0;
    if (base == NULL)
    {
        cout<<"The List Is Empty";
    }
    else
    {
        while (base!=NULL)
	{
            base=base->next;
            c++;
        }
        cout<<"Number of Elements entered is :"<<c;
    }
}
void  AddAtBegining(struct list **base)
{
    struct list *n,*temp;
    n=(struct list*)malloc(sizeof(struct list));
    cout<<"Enter Data:";
    cin>>n->data ;
    n->next=*base;
    *base=n;
}
void delete_atBegin(struct list **base)
{
	    struct list *temp;
  	    temp=*base;
  	    *base=temp->next;
  	    delete temp; 
}
void delete_atAnywhere(struct list **base)
{
    int p;
    struct list *temp, *prev;
	if(*base==NULL )
	{
	 	cout<<"list empty:";
        }
    else 
    {
        cout<<"Enter position you want to delete :";
        cin>>p;
        if (p==1)
        {
            temp=*base;
            *base = temp->next;
            free (temp);
        }
        else
        {
            temp=*base;
            while (p>1& temp!=NULL)
            {
                prev=temp;
                temp=temp->next;
                p++;
            }
        } 
          
	 	
            
    }
}
void reverse(struct list **base)
{
    struct list *temp,*p,*q,*r;
    p== NULL;
    temp=*base;
    while (temp!=NULL)
    {
        r=temp->next;
        temp->next=p;
        p=temp;
        temp=r;
    }
    *base=p;
}
int main()
{
    int c;
    struct list *base=NULL;
    while (1)
    {
        cout<<"<1>add<2>display<3>count<4>add at beging<5>delete at begining<6>delete anywhere<7>reverse the numbers";
        cin>>c;
        if (c==1){
            add(&base);
        }
        else if(c==2){
            display (base);

        }
        else if(c==3){
            count(base);
        }
        else if(c==4){
            AddAtBegining(&base);
        }
        else if(c==5){
            delete_atBegin(&base);
        }
        else if(c==6){
            int p;
            cout<<"Enter Postion:";
            cin>>p;
            delete_atAnywhere(&base);
        }
        else if (c==7){
            reverse(&base);
        }
        
    }
   
}

