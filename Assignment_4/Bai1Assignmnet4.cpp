#include<stdio.h>

int main(){
	int a=1;
	int b=100000;
	int s=0;
	while(a<b+1){
		s=s+a;
		a++;
	}
	printf("Tong S = %d",s);
}
