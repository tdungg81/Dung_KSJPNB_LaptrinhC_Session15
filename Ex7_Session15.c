#include<stdio.h>

int main(){
	
	char text[]="test1234@gmail.com";
	int size = strlen(text);
	int count=0; 
	int number=0;
	int special=0; 
	for(int i=0;i< size;i++){
		if(isalpha(text[i])){
			count++; 
		} 
	} 
	printf("So ky tu la chu cai: %d\n", count); 
	
	for(int i=0;i< size;i++){
		if(isdigit(text[i])){
			number++; 
		} 
	} 
	printf("So ly tu la chu so: %d\n", number);
	
	for (int i = 0; i < size; i++) {
        if (!isalpha(text[i]) && !isdigit(text[i])) {
            special++;
        }
    }
    printf("So ky tu dac biet: %d\n", special);

	
	
	return 0; 
} 
