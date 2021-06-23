#include<stdio.h>
#include<stdlib.h>


struct node {
	int data;
	struct node *next;
};

void transversal(struct node *ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}

}

struct node *DeletionAtStart(struct node *head){
	struct node *p=head;
	struct node *q=head->next;
	head=q;
	free(p);
	return head;
}

struct node *DeletionAtIndex(struct node *head,int index){
	int i=0;
	struct node *p=head;
	struct node *q=p->next;
	for(i=0;i<index-1;i++){
		p=p->next;
		q=q->next;  	
	}
	p->next=q->next;
	free(q);
	return head;
}


struct node *DeletionAtEnd(struct node *head){
	struct node *p=head;
	struct node *q=p->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	
	return head;
}

struct Node *DeleteAfterNode(struct node *head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
         p = p->next;
         q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}



int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	struct node *fourth=(struct node *)malloc(sizeof(struct node));
	
	head->data=23;
	head->next=second;
	
	second->data=11;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=12;
	fourth->next=NULL;
	
	
	//head =DeletionAtStart(head);
	//head= DeletionAtIndex(head,2);
	//head=DeletionAtEnd(head);
	head=DeleteAfterNode(head,11);
	transversal(head);
	return 0;
}
