#include <stdio.h>

int rc(int n){
    int tmp = 0;
    if(n <= 0){
        return n;
    }
    else return (n + rc(n-1));

}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", rc(n));

    return 0;
}