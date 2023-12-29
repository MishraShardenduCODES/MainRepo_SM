// 9. Write a C program to calculate the distance between given two points.  

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

float calculateDistance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;
    // Input coordinates of the two points
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate and display the distance
    float distance = calculateDistance(x1, y1, x2, y2);
    printf("Distance between the two points: %f\n", distance);

    return 0;
}