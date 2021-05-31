#include<stdio.h>

int InCacSoLe(int a[], int n)
{
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			printf("\t%d",a[i]);
		}
	}
}

int main(){
	int n,x;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
			printf("Phan tu thu %d :",i);scanf("%d",&a[i]);
	}
	printf("Cac so le trong mang la : \n");
	InCacSoLe(a,n);
}
