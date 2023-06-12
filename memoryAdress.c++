#include <bits/stdc++.h>

int main() {
    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 10;
    
    scanf("%d", p);
    
    printf("The value of 'P' is: %d\n", *p);
    
    printf("The adress of 'P' is: %p\n", p);
    
    return 0;
}
