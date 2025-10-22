#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements you want to input: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int index, new;
    printf("\n\nEnter the index (0 to %d) you want to modify: ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        printf("Enter the new value: ");
        scanf("%d", &new);
        arr[index] = new;
    } else {
        printf("Invalid index!\n");
        return 0;
    }

    printf("\nUpdated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
