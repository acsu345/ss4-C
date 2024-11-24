#include <stdio.h>

int main(){
	int number;
	printf("Hay nhap mot so bat ki: ");
	scanf("%d", &number);
	if( number % 3 ==0){
		printf(" %d chia het cho 3\n", number); 
	}else{
		printf(" %d khong chia het cho 3\n", number); 
	}if( number % 5 ==0 ){
		printf("%d chia het cho 5\n", number); 
	}else{
		printf("%d khong chia het cho 5\n", number ); 
	}if( number % 15 == 0){
		printf(" %d chia het cho ca 3 va 5", number); 
	}  
} 
