#include<stdio.h>

int main(){
	int n,x;
	printf("Nhap n: ");scanf("%d",&n);
	int s1=1;
	int s2=1;
	
	x=2;
	while(x+s2<n){
		s1=s2;
		s2=x;
		x=s1+s2;
	}
	printf("Tiem can can tim la: %d",x);
}
