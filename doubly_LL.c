#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};


void transverse(struct node *ptr){
	printf("Transverse:\n");
	while(ptr!=NULL){
	printf("Elements are: %d\n",ptr->data);
	ptr=ptr->next;
	}
}

void reverse(struct node *ptr){
	printf("Reverse Transverse:\n");
	while (ptr!=NULL){
	printf("Elements are: %d\n",ptr->data);
	ptr=ptr->prev;
	}
}

void backandforth(struct node *ptr){
	printf("\n\tTwo in one:\n");
	printf("\nTransverse:\n");
	while(ptr->next!=NULL){
		printf("Elements are: %d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("Elements are: %d\n",ptr->data);
	printf("\nReverse Transverse:\n");
	while(ptr->prev!=NULL){
		printf("Elements are: %d\n",ptr->data);
		ptr=ptr->prev;
	}
	printf("Elements are: %d\n",ptr->data);
}


int main(){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	struct node *fourth=(struct node*)malloc(sizeof(struct node));
	
	head->prev=NULL;
	head->data=23;
	head->next=second;
	
	second->prev=head;
	second->data=11;
	second->next=third;
	
	third->prev=second;
	third->data=30;
	third->next=fourth;
	
	fourth->prev=third;
	fourth->data=12;
	fourth->next=NULL;
	
	transverse(head);
	reverse(fourth);
	backandforth(head);

	
	return 0;
}
