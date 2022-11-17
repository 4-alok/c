// arrange the element in such a way so the final array element should be even no followed by odd no;

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 45, 13, 67, 78, 34, 5, 7, 88, 9, 8, 7, 1};

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
        printf("\n");

    for (int i = 0; i < length; i++){
        for (int j = i + 1; j < length; j++){
            if (arr[i] % 2 != 0){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
    return 0;
}