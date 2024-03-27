#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){

    int n;
    printf("give an integer to check: ");
    scanf("%i",&n);

    if(n < 0){
        printf("False\n");
        return -1;
    }

    char* str = NULL;

    sprintf(str,"%i",n);

    int first = 0, last = strlen(str) - 1;

    while(first < last){
        if(str[first] != str[last]){
            printf("False\n");
            return -1;
        }
        first++;
        last--;
    }
    printf("True\n");
}
