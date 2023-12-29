#include <stdio.h>

void reverseArray(int *arr, int size);
void reverseString(char *str);

int main() {
    // Input for array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input for string
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Reverse array and string
    reverseArray(arr, size);
    reverseString(str);

    // Print reversed array
    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Print reversed string
    printf("\nReversed String: %s\n", str);

    return 0;
}

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        // Swap elements pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers to the next pair of elements
        start++;
        end--;
    }
}

void reverseString(char *str) {
    char *start = str;
    char *end = str;

    // Move the end pointer to the end of the string
    while (*end) {
        end++;
    }
    end--;

    // Reverse the string by swapping characters
    while (start < end) {
        // Swap characters pointed by start and end
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers to the next pair of characters
        start++;
        end--;
    }
}
