#include <stdio.h>

int sum(int n){
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        tmp += i;
    }
    return tmp;
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", sum(n));


    return 0;
}