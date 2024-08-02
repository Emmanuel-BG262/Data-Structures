#include<stdio.h>
 
 int main (){
 	int x, count=0, arr[100], i, n, s=(6*4), t=0;
 	printf("Enter the no.of elements in the array:\n");
 	scanf("%d", &n);
 	
 	printf("Enter the elements of the array: \n"); t+4;
 	for(i=0; i<n; i++){
 		t++;
 		t++;
 		scanf("%d", &arr[i]);
 		}
 	
 	printf("Enter the element to search for: \n");
 	scanf("%d", &x);
 	t+2;
 	
 	for(i=0; i<n; i++){
 		t++;
 		t++;
 		if(arr[i] == x){
 			t++;
 			count++;
 			}
 		}
 	
 	if(count > 0){
 		printf("The no. %d was found %d times.\n", x, count);
 		}
 	else{ printf("Not Found in the array.\n");}
 	
 	printf("the space complexity of the program is: %d\n", s+n);
 	printf("the time complexity of the program is: %d\n", t+6);
 	return 0;
 	
 	}
 		
 	
