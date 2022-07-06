//c program to run the average of 3 test scores
#include <stdio.h>

void main() {
    int test1, test2, test3, finalScore;
    printf("Welcome to Gradebot 1.0\n");
    printf("first test score: ");
    scanf("%d",&test1 );
    printf("\nsecond test score: ");
    scanf("%d",&test2 );
    printf("\nthird test score: ");
    scanf("%d",&test3 );
    
    finalScore = (test1 + test2 + test3) / 3;
    
    printf("Final Score: %d", finalScore);
}
