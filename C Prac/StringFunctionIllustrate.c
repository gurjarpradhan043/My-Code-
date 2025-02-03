//wap to illustrate string function(Strlen, strcpy,strcmp,strcat)

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int length, compare;

    printf("Enter a string: ");
    gets(str1);
    length = strlen(str1);
    printf("Length of the string is: %d\n", length);


    strcpy(str2, str1);
    printf("Copied string is: %s\n", str2);


    printf("Enter another string for comparison: ");
    gets(str2);
    compare = strcmp(str1, str2);
    if (compare == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");


    strcat(str1, str2);
    printf("Concatenated string is: %s\n", str1);

    return 0;
}
