#include <stdio.h>

double rc(double n){
    
    if(n <= 1){
        return 1;
    }
    else return (1/n + rc(n-1));

}
/* rc의 call stack

    n = 3
    if(n <= 1){
        return 1;
    }
    else return (1/3 + rc(3-1));

    n = 2
    if(n <= 1){
        return 1;
    }
    else return (1/2 + rc(2-1));

    n = 1
    if(n <= 1){
        return 1;
    }
    else return (1/1 + rc(1-1));
*/
int main(){

    int n;
    scanf("%d", &n);

    printf("%lf", rc(n));

    return 0;
}