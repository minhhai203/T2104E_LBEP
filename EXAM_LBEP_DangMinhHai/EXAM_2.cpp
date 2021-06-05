#include<stdio.h>
#include<string.h>


void upperCase(char s[]){
	for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
     		s[i] -= 32;
		}
	}
	 printf("\nUpper Case: %s", s);       
}

int main(){
	char s[50];
	printf("Enter string: ");
	gets(s);
	upperCase(s);
	
}
