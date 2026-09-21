#include <stdio.h>

int main()
{
    int n, target;
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("Indices: %d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found\n");

    return 0;
}

/*
Test Case 1:
Input:
4
2 7 11 15
9

Expected Output:
Indices: 0 1

Test Case 2:
Input:
3
3 2 4
6

Expected Output:
Indices: 1 2
*/