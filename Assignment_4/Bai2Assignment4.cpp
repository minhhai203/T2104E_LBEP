#include<stdio.h>

int main(){
	int a=1;
	int b=1000;
	double s=0;
	while(a<b+1){
		s=s+(1.0/a);
		a++;
	}
	printf("Tong S = %lf",s);
}
