#include <stdio.h>

int main()
{
    int *z;
    int x;
    
    z = &x;
    
    scanf("%d", z);
    printf("%d", x);

    return 0;
}
