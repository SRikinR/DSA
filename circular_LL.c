#include<stdio.h>
#include<stdlib.h>

struct box{
	int data;
	struct box *next; 
};


void transverse(struct box *p){
	struct box *ptr=p;
	do{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	} while(ptr!=p);
}

struct box *InsertAtStart(struct box *head,int data){
	struct box *ptr=(struct box*)malloc(sizeof(struct box));
	ptr->data=data;
	struct box *p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
	

}

int main(){
	struct box *lion=(struct box*)malloc(sizeof(struct box));
	struct box *cat=(struct box*)malloc(sizeof(struct box));
	struct box *monkey=(struct box*)malloc(sizeof(struct box));
	struct box *dog=(struct box*)malloc(sizeof(struct box));
	
	lion->data=9;
	lion->next=cat;
	
	cat->data=8;
	cat->next=monkey;
	
	monkey->data=7;
	monkey->next=dog;
	
	dog->data=6;
	dog->next=lion;
	
	lion=InsertAtStart(lion,10);
	transverse(lion);
	

	return 0;
}
