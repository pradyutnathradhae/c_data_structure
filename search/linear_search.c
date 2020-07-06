#include<stdio.h>
#include<stdlib.h>
int linear_search(int *arr,int len,int x){
    int i,flag=-1;
    for(i=0;i<len;i++){
        if(arr[i] == x){
            flag=i+1;
            break;
        }
    }
    return flag;
}

int main(){
    int n,i,x;
    int *arr;
    printf("Enter your length of array\n");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    printf("Enter your elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element to search\n");
    scanf("%d",&x);
    i=linear_search(arr,n,x);
    if(i==-1)
        printf("\n Element Absent!");
    else
        printf("Present in pos %d",i);
    return 0;
}