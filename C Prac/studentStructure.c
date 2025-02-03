//wap to store information(rollno, name and percentage ) of 5 student using structure and print those student info when percentage is greater than 70
#include <stdio.h>

// Define the structure to store student information
struct Student {
    int rollno;
    char name[50];
    float percentage;
};

int main() {
    struct Student students[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Roll Number: ");
        while(scanf("%d", &students[i].rollno) != 1) {
            printf("Invalid input. Please enter a valid Roll Number: ");
        }
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage:   ");
        while(scanf("%f", &students[i].percentage) != 1) {
            printf("Invalid input. Please enter a valid Percentage: ");
        }
    }
    printf("\nStudents with percentage greater than 70:\n");
    for(i = 0; i < 5; i++) {
        if (students[i].percentage > 70) {
            printf("Roll Number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Percentage: %.2f\n\n", students[i].percentage);
        }
    }

    return 0;
}
