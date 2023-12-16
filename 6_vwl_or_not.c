// 6. Write a C program to check whether a character entered by the user is a vowel or not. (use if-else, switch)
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The entered character is a vowel.\n");
    } else {
        printf("The entered character is not a vowel.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The entered character is a vowel.\n");
            break;
        default:
            printf("The entered character is not a vowel.\n");
    }

    return 0;
}
