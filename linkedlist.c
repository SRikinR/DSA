#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void transverse(struct node *ptr){
	while(ptr != NULL){
		printf("Elements are: %d\n",ptr->data);
		ptr=ptr->next;
	}

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
	
	transverse(head);
	
	
	
	return 0;
}
