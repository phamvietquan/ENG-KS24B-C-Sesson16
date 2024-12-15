#include <stdio.h>

int main(){
	int number=29;
	int *numberPtr=&number;
	printf("Gia tri cua bien number la: %d\n", number);
	printf("Gia tri cua bien number la: %d\n", *numberPtr);
	printf("Dia chi cua bien number la: %d\n", &number);
	printf("Dia chi cua bien number la: %d\n", numberPtr);
	
	return 0;
}
