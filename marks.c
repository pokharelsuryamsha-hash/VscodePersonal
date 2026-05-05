#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 86 && marks <= 100) {
        printf("Your grade is A+\n");
    }
    else if (marks >= 71 && marks <= 85) {
        printf("Your grade is A\n");
    }
    else if (marks >= 56 && marks <= 70) {
        printf("Your grade is B\n");
    }
    else if (marks >= 41 && marks <= 55) {
        printf("Your grade is C\n");
    }
    else if (marks >= 27 && marks <= 40) {
        printf("Your grade is D\n");
    }
    else if (marks >= 0 && marks <= 26) {
        printf("You have failed\n");
    }
    else {
        printf("Error: Enter marks between 0 and 100\n");
    }

    getchar(); // waits for a key press
    getchar(); // second one needed after scanf
    return 0;
}