// 3. Write a C program to find length of a given string using builtin function.
// 4. Write a C Program to find length of a string without using library function/s.
// 5. Write a C program to read a text and count all the occurrences of a particular letter given by the user.
// 6. Write a C program that will capitalize all the letters of a string.
// 7. Write a C program that counts the total numbers of vowels and their frequency. (same as 5)
// 8. Write a C program to remove the white spaces (blank spaces) from a string.
// 9. Write a program to convert each character of a string into the next alphabet and print the string.
// 10. Write a program that accepts a word from the user and prints it in the following way. For example, if the word is COMPUTER, the program will print it as
// C
// C O
// C O M
// C O M P
// C O M P U
// C O M P U T
// C O M P U T E
// C O M P U T E R

#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define pf printf
#define sf scanf

int rmvspc(char str[], int a);
int prntptrn(char str[], int a);

int main() {
    char str[1000], str2[1000], str3[1000], b = 0, a = 0, alp[26] = {0};
    pf("Tell a string : ");
    fgets(str, 1000, stdin);

    while (str[b] != '\0') {
        if (isalpha(str[b])) {
            str2[b] = str[b] + 1;
        }else{
            str2[b] = str[b];
        }
        b++;
    }
    str2[b] = '\0';  // Null-terminate str2

    puts(str2);  // Print str2

    while (str[a] != '\0') {
        str3[a] = str[a];
        str[a] = toupper(str[a]);
        pf("%c", str[a]);
        if (isalpha(str[a])) {
            alp[str[a] - 65]++;
        }
        a++;
    }
    pf("\n");
    pf("The length of the string is %d\n", a);
    pf("The length of the string (usnbltin) is %d\n", strlen(str));
    for (int i = 0; i < 26; i++) {
        pf("The alphabet %c comes %d times\n", 65 + i, alp[i]);
    }

    rmvspc(str , a);
    pf("\n");
    puts(str);
    pf("\n");
    prntptrn(str3 , a);


    return 0;
}

int rmvspc(char str[], int a) {
    int i, j = 0;
    for (i = 0; i < a; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int prntptrn(char str[],int a){
    for(int i = 0;i < a-1;i++){
        for(int j=0;j < i;j++){
            pf("%c",str[j]);
        }
        pf("\n");
    }
    for(int i = a-1;i > 0;i--){
        for(int j=0;j < i;j++){
            pf("%c",str[j]);
        }
        pf("\n");
    }
}