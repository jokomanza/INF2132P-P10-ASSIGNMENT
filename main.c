#include <stdio.h>

int main() {
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    int assessmentCount;
    float grade, totalGrade = 0, average;
    char marking;

    printf("\n");
    printf("Please enter assessment amount: ");
    scanf("%d", &assessmentCount);
    printf("\n");

    for (int assessment = 1; assessment <= assessmentCount;) {

        printf("Please enter grade of the %d assessment: ", assessment);
        scanf("%f", &grade);

        if (grade <= 0) {
            continue;
        }

        totalGrade += grade;
        assessment++;
    }

    average = totalGrade / assessmentCount;
    if (average >= 85) {
        marking = 'A';
    } else if (average >= 65 && average < 85) {
        marking = 'B';
    } else if (average >= 55 && average < 65) {
        marking = 'C';
    } else if (average >= 35 && average < 55) {
        marking = 'D';
    } else {
        marking = 'E';
    }

    printf("\n");
    printf("Number of assessments: %.2d\n", assessmentCount);
    printf("Total grade: %.2f\n", totalGrade);
    printf("Average grade: %.2f\n", average);
    printf("Marking: %c\n", marking);

    return 0;
}

