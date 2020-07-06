#include <stdio.h>
#include <stdlib.h>

int *sort(int *, int);

int* sort(int* arr,int len){
    int i,j,m,temp;
    for(i=0;i<len-1;i++){
        m=i;
        for(j=i;j<len;j++){
            if(arr[m] > arr[j])
                m=j;
        }
        temp = arr[i];
        arr[i] = arr[m];
        arr[m] = temp;
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
    arr = sort(arr,n);
    printf("\nThe Sorted Array\n");
    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}