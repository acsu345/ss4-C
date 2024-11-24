#include <stdio.h>

int main(){
	int soCu,soMoi,soTien; 
	    printf("chi so cong to dien dau thang: ");
	    scanf("%d",&soCu);
	    printf("chi so cong to dien cuoi thang: ");
	    scanf("%d",&soMoi);
	int soDien = soMoi - soCu ;
	if (soCu > soMoi ){
		printf("Error");
	}
	if(soDien <= 50){
		soTien = soDien * 10000; 
	}
	else if(soDien <= 50){
		soTien = 500000 + (soDien - 50)*15000;
	}
	else if(soDien <= 150){
		soTien = 500000 + 750000 + (soDien - 100)*20000;
	}
	else if(soDien <= 200){
		soTien = 500000 + 750000 + 1000000 + (soDien - 150)*25000;
	}
	else{
		soTien = 500000 + 750000 + 1000000 + 1250000 + (soDien - 200)*30000;
	}
	
	printf("so tien dien ban phai la: %d",soTien);
	
	
return 0;
}
