#include<stdio.h>

int main(){
	int a[50],n,x,count=0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nNhap x: ");scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("\nx co trong mang");
			count++;
		}
	}
	if(count==0)
		printf("\nx khong thuoc mang");
						
}
