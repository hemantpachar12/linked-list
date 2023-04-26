#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*start;
int main()
{
	struct node*newnode1=(struct node*)malloc(sizeof(struct node));
	struct node*newnode2=(struct node*)malloc(sizeof(struct node));
	newnode1 -> data=2;
	newnode1 -> next=newnode2;
	newnode2 -> data=3;
	newnode2 -> next=NULL;
    void display()
    {
    	struct node*temp;
    	temp=start;
    	while(temp!=NULL)
    	{
    		printf("data=%d,setaddr=%d,nextaddr=%d",temp -> data ,temp,temp ->next);
    		temp= temp -> next;
		}
	}
	printf("data=%d,addr=%d",newnode1 -> data,newnode1 -> next);
	printf("data=%d,addr=%d",newnode2 -> data,newnode2 -> next);
	
	display();
}

