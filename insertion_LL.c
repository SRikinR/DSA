#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void transverse(struct node *ptr){
	printf("Elements are:\n");
	while(ptr != NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}

}

struct node *InsertionAtStart(struct node *head,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=head;
	head=ptr;
	return head;
}

struct node *InsertionAtIndex(struct node *head,int data,int index){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	
	return head;
}

struct node *InsertionAtEnd(struct node *head,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *p=head->next;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->data=data;
	ptr->next=NULL;
	
	return head;
}


struct node*InsertionAfterNode(struct node *head, struct node *preNode, int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=preNode->next;
	preNode->next=ptr;
	
	return head;
}

int main(){

	struct node *head=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	struct node *fourth=(struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=4;
	fourth->next=NULL;
	
	//head=InsertionAtStart(head,0);
	//head=InsertionAtIndex(head,22,2);
	//head=InsertionAtEnd(head,22);
	head=InsertionAfterNode(head,second,22);
	transverse(head);
	
	
	
	return 0;
}
