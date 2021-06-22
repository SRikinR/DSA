#include<stdio.h>
#include<stdlib.h>

struct myArr{
	int total_size;
	int used_size;
	int *ptr;
};

void createArr(struct myArr *a,int tsize,int usize){
	a->total_size=tsize;
	a->used_size=usize;
	a->ptr=(int*)malloc(tsize*sizeof(int));
	
}

//int setValue(){

void setvalue(struct myArr *a){
	int i,n;
	printf("Enter the Value:\n");
	for (i=0;i<a->used_size;i++){
	scanf("%d",&n);
	a->ptr[i]=n;
	}
}

void Show(struct myArr *a){
	for (int i=0;i<a->used_size;i++){
	printf("%d\n",a->ptr[i]);
	}
}

int main(){
	struct myArr marks;
	printf("Creating an array!");
	createArr(&marks,10,4);
	
	printf("Setting value in array:\n");
	setvalue(&marks);
	
	printf("Displaying Values:\n");
	Show(&marks);

	return 0;
}
