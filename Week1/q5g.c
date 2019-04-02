#include<stdio.h>
//=========================================================================
typedef struct node
{
	int data;
	struct node* link;
}Node;

Node* add(Node* head, int a)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = a;
	temp->link = NULL;
	if(head == NULL)
	{
		return temp;
	}
	else
	{
		Node* trav = (Node*)malloc(sizeof(Node));
		trav = head;
		
		while(trav->link!=NULL)
			trav = trav->link;
		trav->link = temp;
		
		return head;
	}
}

//=========================================================================

void search(Node* head, int n)
{
	Node* temp = head;
	int i = 1;
	while(temp!=NULL)
	{
		if(temp->data==n)
			printf("%d",i);
		temp = temp->link;	
		i++;
	}
}

//=========================================================================

Node* swap(Node* head, int n)
{
	Node* temp = head;
	Node* temp3 = head;
	Node* temp1 = temp;
	temp1=temp1->link;
	Node* temp2 = temp1;
	temp2=temp2->link;
	if(temp->data==n)
	{
		if(temp->link==NULL)
			return head;
		temp->link=temp1->link;
		temp1->link=temp;
		head = temp1;
		return head;
	}
	
	while(temp1!=NULL)
	{
		
		if(temp1->data==n)
		{
			if(temp1->link == NULL)
			{
				return head;
			}
			else
			{	
				temp->link=temp1->link;
				temp1->link = temp2->link;
				temp2->link = temp1;
				return head;
			}
		}
		temp2 = temp2->link;
		temp1 = temp1->link;
		temp=temp->link;	
	}
	return head;
}

//==============================================================================

void delete(Node* head, int n)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	Node* temp1 = (Node*)malloc(sizeof(Node));
	temp = head;
	temp1 = temp->link;
	
	while(temp1 != NULL)
	{
		if(temp1->data==n)
		{
			temp = temp->link;
			temp1 = temp1->link;
			break;
		}
		
		temp = temp->link;
		temp1 = temp1->link;
	}
	
	while(temp1 != NULL)
	{
		if(temp1->data==n)
		{
			temp->link=temp1->link;
			temp1=temp1->link;
			continue;
		}
		temp = temp->link;
		temp1 = temp1->link;
	}
}

int main()
{
	Node* head = NULL;
	head = add(head, 2);
	head = add(head, 9);
	head = add(head, 3);
	head = add(head, 8);
	head = add(head, 3);
	head = add(head, 5);
	head = add(head, 2);
	head = add(head, 3);
	Node* temp = (Node*)malloc(sizeof(Node));
	temp = head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
		printf("\n");
	
	search(head,3);
	
	
	delete(head,3);
	
	printf("\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
	printf("\nhi");
	head = swap(head,8);
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
	

	
}