#include <stdio.h>
void array(int *arr, int *size, int index, int n );
int main(){
	int arr[]={2,4,6,8,10};
	int size =sizeof(arr)/sizeof(int);
	printf("%d", size);
	printf("Phan tu trong mang la: \n");
	for(int i=0; i<size;i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	printf("Moi ban nhap vi tri muon them: ");
	scanf("%d", &index);
	printf("Moi ban nhap gia tri muon them: ");
	scanf("%d", &n);
	array(&arr, &size, index, n);
	printf("Mang sau khi cap nhap la: \n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

	return 0;
}
	array(int *arr, int *size, int index, int n ){
		if(index>=0&&index<size){
			for(int i= *size;i>index;i--){
				*(arr+i)=*(arr+i-1);
			}
			*(arr+index)=n;
			(*size)++;
		}else{
			printf("Vi tri khong hop le");
		}
	}
