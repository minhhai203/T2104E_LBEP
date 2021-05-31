#include<stdio.h>

void TimBCNN(int a,int b){
	int max = a*b,bcnn;
	if(a>b){
		for(int i =a; i <= max; i++){
        if(i % a == 0 && i % b == 0){
            bcnn = i;
            break;
        	}
    	}
	}else{
		for(int i =b; i <= max; i++){
        if(i % a == 0 && i % b == 0){
            bcnn = i;
            break;
        	}
    	}
	}
	printf("%d",bcnn);
    
}

int main(){
	int a,b;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("BCNN cua %d va %d la : \n",a,b);
	TimBCNN(a,b);

	
}
