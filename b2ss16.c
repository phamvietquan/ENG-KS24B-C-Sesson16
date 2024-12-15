#include <stdio.h>
int swap(int *number1,int *number2);
int main(){
	int number1=29;
	int number2=8;
	printf("Number1 truoc khi hoan doi la: %d\n", number1);
	printf("Number2 truoc khi hoan doi la: %d\n", number2);
	printf("\n");
	swap(&number1, &number2);
	printf("Number1 sau khi hoan doi la: %d\n",number1);
	printf("Number2 sau khi hoan doi la: %d", number2);
	return 0;
}
	swap(int *number1, int *number2){
		int temp= *number1;
		*number1=*number2;
		*number2=temp;
	}
