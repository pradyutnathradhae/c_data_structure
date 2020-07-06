#include <stdio.h>
#include <stdlib.h>

int *sort(int *, int );

int binary_search(int *arr,int len,int x){
    arr = sort(arr,len);
    int i, flag = -1;
    int low = 0,upp=len-1;
    int mid;
    while(low<=upp){
        mid = (low+upp)/2;
        if(arr[mid]>x)
            upp = mid - 1;
        else if (arr[mid]<x)
            low = mid + 1;
        else
        {
            flag = mid+1;
            break;
        }
        
    }
    return flag;
}
int main()
{
    int n, i, x;
    int *arr;
    printf("Enter your length of array\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter your elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Element to search\n");
    scanf("%d", &x);
    i = binary_search(arr, n, x);
    if (i == -1)
        printf("\n Element Absent!");
    else
        printf("Present in pos %d", i);
    return 0;
}

int *sort(int *arr, int len)
{
    int i, j, m, temp;
    for (i = 0; i < len - 1; i++)
    {
        m = i;
        for (j = i; j < len; j++)
        {
            if (arr[m] > arr[j])
                m = j;
        }
        temp = arr[i];
        arr[i] = arr[m];
        arr[m] = temp;
    }
    return arr;
}