// 1. Write C program to find the area of the following: Triangle, Square, Rectangle and Circle. Implement the C program for all possible inputs appropriate message.
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float base, height, side, length, width, radius, area;
    printf("Choose a shape to find its area:\n");
    printf("1. Triangle\n2. Square\n3. Rectangle\n4. Circle\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;
        case 2:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
            break;
        case 3:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14529 * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
