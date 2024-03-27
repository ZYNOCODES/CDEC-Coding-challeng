#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void){

    char* str = NULL;
    printf("Give the binary value: ");
    scanf("%s",str);

    int res=0;
    for(int i = strlen(str)-1 ; i >= 0 ; i--){
        int bit = atoi(&str[i]);
        res += bit * pow(2,strlen(str) - 1 - i);
    }

    printf("%i",res);
}
