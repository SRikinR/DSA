#include<stdio.h>


void display(int arr[],int size){
	
	for (int i=0;i<size;i++){
		printf("%d\n",arr[i]);	
	}
	printf("\n");
}

int insertion(int arr[],int index,int element,int size,int capacity){
	if (index>capacity && size>capacity){
		return -1;	
	}
	for(int i= size-1;i>=index;i--){
		arr[i+1]=arr[i];
	}	
	arr[index]=element;	
		
	return 0;
}


int main(){
	int arr[100] = {7, 8, 12, 27, 88};
        int size = 5, element = 45, index=1;
	insertion(arr,1,45,5,100);
	size+=1;
	display(arr,5);
	return 0;
}
