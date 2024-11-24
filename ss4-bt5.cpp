#include <stdio.h>

int main(){
	int number1, number2, number3;
	printf("Hay nhap vao ba so nguyen");
	scanf("%d", &number1, &number2,&number3);
	if(number3>number1 && number3<number2 || number3>number2 && number3<number1){
		printf("So thu ba nam trong khoang giua so thu nhat va so thu hai"); 
	}else{
		printf("So thu ba khong nam giua khoang so thu nhat va so thu hai"); 
	} 
} 
