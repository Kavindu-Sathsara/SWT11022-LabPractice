#include <stdio.h>

int main()
{
    int studentID;
    float GPA;
    char grade[3];

    studentID = 12345;
    GPA = 3.75;
    grade[0] = 'A';
    grade[1] = '\0';
    

    printf("Student ID:%d\n",studentID);
    printf("GPA :%.2f\n",GPA);
    printf("Grade:%s\n",grade);

    studentID = 54321;
    GPA = 3.90;
    grade[0] = 'A';
    grade[1] = '+';
    grade[2] = '\0';

    printf("\nUpdated Student ID:%d\n",studentID);
    printf("Updated GPA :%.2f\n",GPA);
    printf("Updated Grade:%s\n",grade);

    return 0;
}
