#include <stdio.h>

int main(){
	int number;
	printf("Hay nhap mot so bat ki: ");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("%d la so chan", number);	
	}else{
		printf("%d la so le ", number ); 
	} 
} 
