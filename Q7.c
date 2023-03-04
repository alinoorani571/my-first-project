#include <stdio.h>

int main() {
    int a,b,h,m,s;
    a = 2343345;
    h= a/3600;
    b=a%3600;
    m=b/60;
    s=b%60;
    printf("%d:%d:%d",h,m,s);
    return 0;
}
