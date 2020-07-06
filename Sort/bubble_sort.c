#include <stdio.h>
#include <stdlib.h>

int *sort(int *, int);

int *sort(int *arr, int n)
{
    int i, j, m, temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main()
    {
        int n, i;
        int *arr;
        printf("Enter your length of array\n");
        scanf("%d", &n);
        arr = (int *)malloc(n * sizeof(int));
        printf("Enter your elements of array\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        arr = sort(arr, n);
        printf("\nThe Sorted Array\n");
        for (i = 0; i < n; i++)
        {
            printf("\n%d", arr[i]);
        }
        return 0;
    }