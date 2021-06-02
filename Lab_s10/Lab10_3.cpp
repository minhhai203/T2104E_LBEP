#include<stdio.h>
#include<string.h>

int main(){
	int n;
	printf("Nhap so chuoi muon nhap : ");scanf("%d",&n);
	char s[n][50];
	for(int i=0;i<n;i++){
		printf("Mang thu %d : ",i);
		scanf("%s",s);
	}
	for(int i=0;i<n;i++){
		if(strcmp(s[i],s[i+1])>0){
			char tmp[50];
			strcpy(tmp,s[i]);
			strycpy(s[i],s[i+1]);
			strycpy(s[i+1],tmp);
		}
	}
}
