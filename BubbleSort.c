#include <stdio.h>

int main() {
    int n, i, j, temp, t=0;t++;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");t+=4;t+=n+1;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);t++;
    }

    for (i = 0; i < n - 1; i++) {t+=n+1;t+=n*(n+1);
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;t++;
            }t++;
        }t++;
    }

    printf("Sorted array:\n");t++;t+=n+1;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);t++;
    }
    printf("\n");t+=3;

    return 0;
}
