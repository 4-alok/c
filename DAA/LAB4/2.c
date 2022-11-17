// WAP for binary search and compare best worst and average case for different values of n

#include<stdio.h>
#include<stdlib.h>

int binary_search(int *,int,int);

int main() {
    int n, i, k, l;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nBinary Search\n");
    printf("\nEnter the element to be searched: ");
    scanf("%d",&k);
    l=binary_search(arr,n,k);
    if(l==-1) {
        printf("\nElement not found\n");
    }
    else {
        printf("\nElement found at index %d\n",l);
    }
    return 0;

}

int binary_search(int *arr,int n,int k) {
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==k) {
            return mid;
        }
        else if(arr[mid]<k) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return -1;
}
