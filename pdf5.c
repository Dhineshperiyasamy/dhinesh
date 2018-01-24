#include <stdio.h>

int main()
{
    int arr[MAX_SIZE]; 
    int j, e=5;
    printf("Enter size of array: ");
    printf("Enter %d elements in the array : ", e);
    for(j=0; j<e; j++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(j=0; j<e; j++)
    {
        printf("%d, ", arr[j]);
    }
    return 0;
}
