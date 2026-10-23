#include <stdio.h>

int arr[100], n, i, pos, item;

int main()
{
    // input
    printf("Enter number of elements :");
    scanf("%d", &n);
    printf("Enter array elements :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // traversal
    printf("\n Array :");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Insertion
    printf("\n Enter index for insertion :");
    scanf("%d", &pos);
    printf("\n Enter element to insert :");
    scanf("%d", &item);
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = item;
    n++;
    printf("Array after insertion:");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Deletion
    printf("\n enter index for deletion :");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("Array after deletion:");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Searching
    printf("\n Enter element to search :");
    scanf("%d", &item);
    for (i = 0; i < n; i++) {
        if (arr[i] == item) {
            printf("element found at index : %d", i);
            return 0;
        }
    }
    printf("element not found ");
    return 0;
}
