#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float p,dt,cv;
	printf("Nhap vao 3 canh cua tam giac\n");
	printf("Nhap canh a: ");scanf("%d",&a);
	printf("Nhap canh b: ");scanf("%d",&b);
	printf("Nhap canh c: ");scanf("%d",&c);
	if(a<b+c && b<a+c && c<a+b){
		p=(a+b+c)/2.0;
		cv=p*2;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi : %f\n", cv);
		printf("Dien tich : %f", dt);
	}else{
		printf("3 canh cua tam giac khong thoa man");
	}
	
}
