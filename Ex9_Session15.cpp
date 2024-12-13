#include <stdio.h>
#include <string.h>

int main() {
    char text[100] = "hello world, o";  
    char result[100];                
    char ch;                         
    int j = 0;                       

    printf("Chuoi ban dau: %s\n", text);

    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &ch);  

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] != ch) {
            result[j] = text[i];
            j++;
        }
    }
    result[j] = '\0';  

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, result);

    return 0;
}

