#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		if(i==0){
			printf("Phan tu thu %d :",i);scanf("%d",&a[i]);
		}else{
			int tmp,count=0;
			while(count==0){
				printf("Phan tu thu %d :",i);scanf("%d",&tmp);
				for(int j=i-1;j>=0;j--){
					if(tmp==a[j]){
						count++;
						break;
					}
				}
				if(count>0){
					printf("\nSo ban nhap bi trung ! Moi nhap lai !\n");
					count=0;
				}else{
					a[i]=tmp;
					break;
				}
			}
		}	
	}
	printf("Mang sau khi nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	
}
