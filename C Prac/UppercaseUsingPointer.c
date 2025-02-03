//wap to convert a string to uppercase using function and pointers
#include <stdio.h>
#include <ctype.h>
void toUppercase(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    toUppercase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
