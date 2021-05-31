#include<stdio.h>

bool TimKiem(int a[], int n, int x){
   for(int i = 0; i<n ; i++)
   	if(x==a[i])
      return true;
   return false;
}

int main(){
	int n,x;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
			printf("Phan tu thu %d :",i);scanf("%d",&a[i]);
	}
	printf("Nhap x : ");scanf("%d",&x);
	if(TimKiem(a,n,x)){
		printf("X co trong mang");
	}else{
		printf("X khong co trong mang");
	}
}
