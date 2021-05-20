#include<stdio.h>

int main(){
	int n;
	printf("Nhap n = ");scanf("%d",&n);
	if(n>0){
		int a=1;
		double s=1;
		while(a<=n){
			s=s*a;
			a++;
		}
		printf("Tong cua %d giai thua = %lf",n,s);
	}else
		printf("So nhap vao khong thoa man !");
	
	
	
}
