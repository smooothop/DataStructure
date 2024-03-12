#include <stdio.h>

int rc(int n){
    
    if(n <= 1){
        return 1;
    }
    else return (n + rc(n-1));

}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", rc(n));

    return 0;
}