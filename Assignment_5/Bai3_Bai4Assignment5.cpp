#include<stdio.h>

int main() {
   	int a, b, x,y;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	
   for(int i = 1; i <= a || i <= b; i++) {
   		if( a%i == 0 && b%i == 0 )
      		x = i;
   }
   y=(a*b)/x;
   printf("USCLN cua %d va %d la %d\n",a,b, x);
   printf("BSCNN cua %d va %d la %d",a,b, y);
}
