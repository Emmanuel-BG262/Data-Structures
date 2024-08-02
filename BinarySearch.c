#include <stdio.h>

int main() {
    int n, flag=1, t=0;t++;
    printf("Enter the number of elements in the array: ");t++;
    scanf("%d", &n);t++;

    int arr[n];t++;
    printf("Enter %d sorted elements:\n", n);t++;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);t++;
    }

    int target;t++;
    printf("Enter the target element to search for: ");t++;
    scanf("%d", &target);t++;

    int left = 0, right = n - 1;t++;
    int result;t++;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            flag==0;t++;
            break;
        }t++;
        if (arr[mid] < target) {
            left = mid + 1;t++;
        } else {
            right = mid - 1;t++;
        }
    }

	
    if(flag==1){ printf("Element found at index %d\n", result);t++;
		}
	else{ printf("Not Found");t++;
	}
	printf("The time complexity is : %d", t);
	printf("The space Complexity is : %d", (8*4)+n);
    return 0;
}
