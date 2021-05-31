#include<stdio.h>

void TimUCLN(int a, int b)
{
	int x;
	for(int i = 1; i <= a || i <= b; i++) {
   		if( a%i == 0 && b%i == 0 )
      		x = i;
   }
   printf("%d",x);
}

int main(){
	int a,b;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("UCLN cua %d va %d la : \n",a,b);
	TimUCLN(a,b);

	
}
