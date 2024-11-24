#include <stdio.h>

int main(){
	int number;
	printf("Hay nhap mot so bat ki: ");
	scanf("%d", &number);
	if(number > 0){
		printf("%d la so duong", number);	
	}else{
		printf("%d la so am", number ); 
	} 
} 
