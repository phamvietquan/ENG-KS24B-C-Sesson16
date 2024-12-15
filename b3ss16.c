#include <stdio.h>
void tinhTong(int *number1, int *number2, int *result);
int main(){
	int number1=29;
	int number2=8;
	printf("%d, %d\n", number1, number2);
	int sum;
	tinhTong(&number1,&number2, &sum);
	printf("Tong hai so tren la: %d",sum);
	return 0;
}
	tinhTong(int *number1, int *number2,int *result){
		*result=*number1+*number2;
	}
