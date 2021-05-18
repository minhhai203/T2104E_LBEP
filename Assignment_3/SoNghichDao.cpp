#include <stdio.h>
 
int main(){
    int n, last;
    printf("Nhap vao so can tim nghich dao: ");
    scanf("%d", &n);
    if(n>0 && n<10000){
    	int nghichdao = 0;
    	while(n > 0){
        	last = n % 10;
        	nghichdao = nghichdao * 10 + last;
        	n = n / 10;
    	}
    	printf("So nghich dao la: %d", nghichdao);
	}else{
		printf("So ban nhap khong hop le !");
	}
	
    
}
