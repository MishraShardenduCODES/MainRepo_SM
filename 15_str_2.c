#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

// Function prototype
int compare(char a[], char b[]);

int main() {
    printf("a > A\n");
    char str[1000], strr[1000];
    printf("Tell both the strings: \n");
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';

    fgets(strr, 1000, stdin);
    strr[strcspn(strr, "\n")] = '\0';

    printf("After comparing the result is: %d\n", strcmp(str, strr));

    pf("\n\n");

    char str1[1000]; // declaration of char array
    char str2[1000]; // declaration of char array
    printf("Enter the first string: ");
    fgets(str1,1000,stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2,1000,stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int c = compare(str1, str2); // calling compare() function
    if (c == 0)
        printf("strings are same\n");
    else
        printf("strings are not same\n");

    return 0;
}

// Comparing both the strings.
int compare(char a[], char b[]) {
    int flag = 0, i = 0; // integer variables declaration
    while (a[i] != '\0' && b[i] != '\0') // while loop
    {
        if (a[i] != b[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}
