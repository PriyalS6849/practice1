//findind duplicate in linked list........................................................

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
int data;
struct node *next;

}*first=NULL, *second= NULL, *third=NULL;
void create(int a[],int n)
{
  int i;
  struct node*t,*last;
  first=(struct node *)malloc(sizeof(struct node))  ;
  first->data=a[0];
  first->next=NULL;
  last=first;
  for(int i=1;i<n;i++)
  {

      t=(struct node *)malloc(sizeof(struct node));
      t->data=a[i];
      t->next=NULL;
      last->next=t;
      last=t;
  }
}

void create2(int a[],int n)
{
  int i;
  struct node*t,*last;
  second=(struct node *)malloc(sizeof(struct node))  ;
  second->data=a[0];
  second->next=NULL;
  last=second;
  for(int i=1;i<n;i++)
  {

      t=(struct node *)malloc(sizeof(struct node));
      t->data=a[i];
      t->next=NULL;
      last->next=t;
      last=t;
  }

}
void display(struct node *p )
{
   while(p!=NULL){
       cout<<p->data;
       p=p->next;
    }

}

void concat(struct node*p,struct node *q)
{

    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
        p->next=q;
    }
}


int main()
{

    int A[]={10 ,20, 30,40,80};

    int B[]={120,150,170,560,89};
    create(A,5);
    create2(B,5);

    concat(first,second);
     display(third);

}


