#include <stdio.h>

void array(int *arr,int size);
int main(){
	int arr[]={5,10,15,20,25,30};
	int size=sizeof(arr)/sizeof(int);
	array(arr,size);
	return 0;
}
	array(int *arr, int size){
		printf("Cac phan tu trong mang la: \n");
		for( int i=0;i<size;i++){
			printf("arr[%d]=%d\n", i,arr[i] );
		}
	}
