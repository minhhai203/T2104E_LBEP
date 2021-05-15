#include<stdio.h>

int main(){
	
	int a,b,c,min;
	printf("Nhap 3 so a, b, c kiem tra so nho nhat\n");
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);
	printf("Nhap so c: ");scanf("%d",&c);
	
	min = a;
	if(b<min){
		min=b;
	}
    if(c<min){
    	min=c;
	}
	
    printf("\nSo nho nhat la %d", min);
	
}
