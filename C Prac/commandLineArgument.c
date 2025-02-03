//wap to find the sum of two numbers suing command line argument
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    int i, sum = 0;

    if (argc != 3) {
        printf("You forgot to type the numbers.\n");
        exit(1);
    }

    printf("The sum is: ");
    for (i = 1; i < argc; i++) {
        sum = sum + atoi(argv[i]);
    }
    printf("%d\n", sum);
}

// // gcc -o commandLineArgument commandLineArgument.c
// >> ./commandLineArgument 5 10
