#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("CHUONG TRINH TINH CHU VI VA DIEN TICH TAM GIAC\n\n");
	do{
		printf("Nhap canh a = ");
		scanf("%d",&a);
		printf("Nhap canh b = ");
		scanf("%d",&b);
		printf("Nhap canh c = ");
		scanf("%d",&c);
	}while(!(a+b>c&&b+c>a&&a+c>b)) ; 
	
	int p = a+b+c;
	float p2 = (float)p/2;
	float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("Chu vi cua tam giac la : %d\n",p);
	printf("Dien tich cua tam giac la : %f",s);
}
