#include <stdio.h>
#include <math.h>

int main(){

    int two[10];
    
    for(int i = 0; i < 10; i++){
        two[i] = pow(2,i);
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", two[i]);
    }

    return 0;
}