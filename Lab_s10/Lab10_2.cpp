#include<stdio.h>
#include<string.h>


void InHoaChuoi(char s[]){
	for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
     		s[i] -= 32;
		}
	}
	 printf("\nChuoi sau khi chuyen thanh in hoa la: %s", s);       
}

int main(){
	char s[50];
	printf("Nhap chuoi : ");
	gets(s);
	InHoaChuoi(s);
	
}
