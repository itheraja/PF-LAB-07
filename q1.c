#include <stdio.h>

int main() {
    int arr[5], i, temp;

    printf("Enter 5 integers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    
    temp = arr[4];

    
    arr[4] = arr[3];
    arr[3] = arr[2];
    arr[2] = arr[1];
    arr[1] = arr[0];
    arr[0] = temp;

    printf("Shifted array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
