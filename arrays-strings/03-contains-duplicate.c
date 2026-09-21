#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];
    int duplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
            break;
    }

    if (duplicate)
        printf("Duplicate found\n");
    else
        printf("No duplicate\n");

    return 0;
}