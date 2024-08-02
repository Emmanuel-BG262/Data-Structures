#include <stdio.h>

int main() {
    int n, i, j, x, temp, t=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n"); t+=5;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);t++;
    }

    for (i = 0; i < n - 1; i++) {
   
        x = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[x]) {
                x = j;t++;
            }t++; t++;
        }

        if (x != i) {
            temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp;t++;
        }t++;
    }

    printf("Sorted array:\n");t++;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);t++;
    }
    printf("\n");t+=3;
	printf("The time complexity is: %d",t);
	printf("The space complexity is: %d", 7*4+n*4;
    return 0;
}
