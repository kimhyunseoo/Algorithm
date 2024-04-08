#include <stdio.h>

int f(int n){
    if (n == 1)
        return 1;
    else if (n == 0)
        return 1;
    return (n * f(n - 1));
}

int main () {
    int n;
    scanf("%d", &n);
    int a = f(n);
    printf("%d",a);
    return 0;
}