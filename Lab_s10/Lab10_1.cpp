#include<stdio.h>
#include<string.h>

void DemNguyenAm(char s[]){
	int nguyenam=0,phuam=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]== 'a' ||s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='i'){
			nguyenam++;
		}else{
			phuam++;
		}
	}
	printf("Chuoi vua nhap co %d nguyen am va %d phu am",nguyenam,phuam);
}

int main(){
	char s[50];
	printf("Nhap chuoi can kiem tra: ");
	gets(s);
	DemNguyenAm(s);
}
