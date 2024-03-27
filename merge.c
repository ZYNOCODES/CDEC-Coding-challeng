#include <stdio.h>

int main(void){
    int n1,n2;
    printf("give the kenght of the first array: ");
    scanf("%i",&n1);

    printf("give the kenght of the second array: ");
    scanf("%i",&n2);

    int *arr1 = malloc( n1 * sizeof(int));
    int *arr2 = malloc( n2 * sizeof(int));

    int i = 0, j = 0;
    while(i < n1 || j < n2){
        if(arr1[i] > arr2[j]){
            int tmp = arr1[i];
            arr1[i]= arr2[j];
            arr2[j] = tmp;
        }
        i++;
        j++;
    }
}
