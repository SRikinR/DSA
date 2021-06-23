#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size){
	printf("Elements are: \n");
	for (int i=0; i<size;i++){
	printf("%d\n",arr[i]);
	}

}

void deletion(int arr[],int size,int index,int capacity){
	if(index>capacity || index>size){
	return -1;
	}
	for(int i=index; i<size-1;i++){
		
		arr[i]=arr[i+1];
	}
	

}


int main(){
 int arr[]={1,2,3,4,5,6,7,8,9,10};
 int size=sizeof(arr)/sizeof(int);
 int index=2;
 printf("size: %d\nDelete index: %d\n",size,index);
 printf("Before deletion ");
 display(arr,size);
 
 deletion(arr,size,index,100);
 printf("After deletion ");
 size-=1;
 display(arr,size);

return 0;
}
