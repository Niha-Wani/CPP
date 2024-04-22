#include<iostream>
#include<stdio.h>
using namespace std;
struct dlist{
    int data;
    struct dlist *next, *prev;

};
void add(struct dlist**base)
{
    struct dlist*n,*temp;
    n=(struct dlist*)malloc(sizeof(struct dlist));
    cout<<"Enter Data";
    cin>>n->data;
    
    if (*base==NULL){
        *base=n;
    }
    else{
        temp=*base;
        while (temp->next!=NULL){
            temp=temp->next;
        }
            temp->next=n;
            n->prev=temp;
            n->next=NULL;
        
    }
}
void display(struct dlist *base){
    if (base==NULL){
        cout<<"List is Empty";
    }
    else{
        while (base!=NULL){
            cout<<" "<<base->data<<",";
            base=base->next;
        }
      
    }

}
void count(struct dlist *base){
    int c=0;
    if (base ==NULL){
        cout<<"list is empty";

    } else{
        while (base!=NULL){
            base=base->next;
            c++;
        }
        cout<<"Number of Elements entered is :"<<c;
    }

}
void add_at_beginig(struct dlist**base){
    struct dlist *n,*temp;
    n=(struct dlist*)malloc(sizeof(struct dlist));
    cout<<"Enter Data";
    cin>>n->data;
    temp=*base;
    *base=n;
    n->next=temp;
    n->prev=NULL;
    temp->prev=n;

}
void delete_atbeging(struct dlist **base){
    struct dlist *temp;
    temp=*base;
    *base=temp->next;
    (*base)->prev=NULL;

    delete temp;
}
void delete_at_anywhere(struct dlist ** base){
    int p;
    struct dlist *temp , *prev,*next;
    if (*base ==NULL){
        cout<<"list is empty";
    }
    else {
        cout<<"Enter the POstion you want to delete ";
        cin>>p;
        if(p==1){
            temp=*base;
            *base=temp->next;
            (*base)->prev=NULL;
            delete temp;
        }
        else {
            temp=*base;
            while(p>1 & temp!=NULL){

            }
        }

    }
}
int main (){
      int c;
    struct dlist *base=NULL;
    while (1){
        cout<<" ""press<1>toadd ," "press<2>to display, press <3>to count the elements,press <4>to add at begingig, press <5>to delete at anywhere";
        cin>>c;
        if (c==1){
            add(&base);
        }
        else if (c==2)
        {
           display(base);
        }
        else if (c==3)
        {
            count (base);
        }
        else if (c==4){
            add_at_beginig(&base);
        }
        else if(c==5){
            delete_atbeging(&base);
        }
        
    }
}
