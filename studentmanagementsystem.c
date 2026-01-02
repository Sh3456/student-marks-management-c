#include <stdio.h>

int main() {
    int i, j;
    int n, m;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects: ");
    scanf("%d", &m);

    int arr[n][m];

    // Input marks
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n----- RESULTS -----\n");

    // Calculate result for ALL students
    for (i = 0; i < n; i++) {
        float sum = 0;

        for (j = 0; j < m; j++) {
            sum += arr[i][j];
        }

        float total_marks = m * 100;
        float percentage = (sum / total_marks) * 100;

        printf("\nStudent %d\n", i + 1);
        printf("Total Marks = %.2f\n", sum);
        printf("Percentage  = %.2f\n", percentage);

        if (percentage >= 90) {
            printf("Grade A\n");
        }
        else if (percentage >= 80) {
            printf("Grade A-\n");
        }
        else if (percentage >= 70) {
            printf("Grade B\n");
        }
        else if (percentage >= 60) {
            printf("Grade B-\n");
        }
        else if (percentage >= 50) {
            printf("Grade C\n");
        }
        else {
            printf("Fail\n");
        }
    }

    return 0;
}
