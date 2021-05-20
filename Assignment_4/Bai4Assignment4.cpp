#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("Nhap 3 so la 3 canh cua tam giac");
	while(a>=b+c || b>=a+c || c>=a+b){
		printf("Nhap a : ");scanf("%f",&a);
		printf("Nhap b : ");scanf("%f",&b);
		printf("Nhap c : ");scanf("%f",&c);
		if(a>=b+c || b>=a+c || c>=a+b){
			printf("\n3 so nhap vao khong thoa man! Hay nhap lai !\n");
		}
	}
	float p,dt,cv;
		p=(a+b+c)/2.0;
		cv=p*2;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("3 canh hop le\n");
		printf("Chu vi : %f\n", cv);
		printf("Dien tich : %f", dt);
		
}
