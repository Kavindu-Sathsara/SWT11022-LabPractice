#include <stdio.h>

int main() {

    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    printf("Initial Student Details:\n");
    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %c\n\n", grade);

    studentID = 54321;
    GPA = 3.90;

    char grade_updated[] = "A+";

    printf("Updated Student Details:\n");
    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %s\n", grade_updated);

    return 0;
}
