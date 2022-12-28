#include<stdio.h>
#include<stdlib.h>
#define false 0
#define true 1
struct q_point
{
	int ele;
	struct q_point *n;
};
struct q_point *f_ptr=NULL;
int e_que(void);
void add_ele(int);
int rem_ele(void);
void show_ele();
void main()
{
	int ele,choice,i;
	while(1)
	{
		printf("implementation of queue using pointers\n");
		printf("...............");
		printf("\n\t 1.to insert an element");
		printf("\n\t 2.to remove an element");
		printf("\n\t 3.to display \n 4.exit");
		printf("\n exit");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n\t element to be inserted");
				scanf("%d",&ele);
				add_ele(ele);
				break;
			case 2:
				if(!e_que())
				{
					i=rem_ele();
					printf("%d is removed",i);
					break;
				}
				else
				{
					printf("Q is empty");
				}
				break;
			case 3:
				
				show_ele();
				break;
			case 4:
				printf("exit");
				break;
			default:
				printf("\n\t invalid choice");
				break;
		}
	}
}
int e_que()
{
	if(f_ptr==NULL)
		printf("true");
	        printf("false");
}
void add_ele(int ele)
{
	int ptr;
	struct q_point *queue = (struct q_point*)malloc(sizeof(struct q_point));
			queue->ele=ele;
			queue->n=NULL;
			if(f_ptr==NULL)
			f_ptr=queue;
			else
			struct q_point *ptr;
			ptr=f_ptr;
			for(ptr=f_ptr;ptr->n!=NULL;ptr=ptr->n);
			ptr->=queue;
			}
int rem_ele()
{
struct q_point *queue=NULL;
if(e_que()==false)
{
  int i =f_ptr->ele;
  queue=f_ptr;
  f_ptr=f_ptr->n;
  free(queue);
  return i;
}
else
{
	printf("queue is empty");
	return-9999;
}
}
void show_ele()
{
	int ptr;
	struct q_point *ptr=NULL;
	ptr=f_ptr;
	if(e_que())
	{
		printf("queue is empty");
		return;
	}
	else
	{
		printf("elements present in queue are");
		while(ptr!=NULL)
		{
			printf("%d",ptr->ele);
			ptr=ptr->n;
		}
	}
}


