
#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Insertion
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &value);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Deletion
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Traversal
    printf("\nArray traversal:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
