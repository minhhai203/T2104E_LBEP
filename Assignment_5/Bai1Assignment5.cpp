#include<stdio.h>

int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	if(n>0)
	{
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
				printf("%d\n",i);
		}
	}	
	else
	{
		printf("Moi nhap lai!");
	}
}

