#include<stdio.h>

int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int s=0;
	if(n>0){
		for(int i=1;i<n;i++){
		if(n%i==0){
			printf("%d\n",i);
			s=s+i;			
		}
	}
	printf("Tong cac uoc cua %d la: %d ",n,s);
	}else
		printf("Moi nhap lai!");
	
}
