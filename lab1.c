//c program to run the average of 3 test scores
#include <stdio.h>
#define NUM_TESTS 3

void main() {
    int test1, test2, test3, avgScore;
    printf("Welcome to Gradebot 1.0\n");
    printf("first test score: ");
    scanf("%d",&test1 );
    printf("\nsecond test score: ");
    scanf("%d",&test2 );
    printf("\nthird test score: ");
    scanf("%d",&test3 );
    
    avgScore = (test1 + test2 + test3) / NUM_TESTS;
    
    printf("Average Score: %d", avgScore);
}
