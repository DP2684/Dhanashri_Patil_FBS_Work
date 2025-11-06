#include <stdio.h>

int main() {
    int s1 = 85;   
    int s2 = 90;   
    int s3 = 78;  
    int s4 = 88;   
    int s5 = 92; 

    int total;
    float percentage;

    total = s1 + s2 + s3 + s4 + s5;

    percentage = (total / 5.0);

    printf("Marks: %d, %d, %d, %d, %d\n", s1, s2, s3, s4, s5);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}