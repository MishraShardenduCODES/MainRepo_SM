// 4. Write a C program with a function to find the sum of digits of a given number.
// 5. Write a C program with a function to search a number within an array.
// 8. Write a C program with a function to sort an array of integers in ascending order.



#include <stdio.h>
#include <math.h>

#define pf printf
#define sf scanf

int main() {
    int a, dummy, len = 0;
    pf("Tell a number: ");
    sf("%d", &a);
    dummy = a;
    for (int i = 1; dummy > 0; i = i * 10) {
        dummy = dummy / i;
        len++;
    }

    int b, c = 0;
    int z = pow(10, len - 1);

    for (int i = 0; i < len; i++) {
        b = (a / z) % 10;
        c += b;
        z /= 10;
    }

    pf("The sum of the digits is %d\n", c);

    int x;
    pf("Tell the length of the array you want: ");
    sf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++) {
        pf("Tell the element: ");
        sf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < x - 1 - i; j++) {
            if (arr[j + 1] < arr[j]) {
                temp = arr[j];        // Corrected
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    int key;
    pf("Tell the element you want to find: ");
    sf("%d", &key);


    int left = 0, right = x - 1, mid, stpr = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] < key) {
            left = mid + 1;
        } else if (arr[mid] > key) {
            right = mid - 1;
        } else {
            pf("The element %d is present at %d index", key, mid);
            stpr = 1;
            break;
        }
    }

    if (stpr == 0) {
        pf("The element is not present in the array");
    }
    return 0;
}
