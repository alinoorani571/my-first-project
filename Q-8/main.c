#include <stdio.h>

int main() {
    int x ;
    int a,b,c,d,e,y,q,p,f,z,g,r,k,j;
    x=154352;
    a=100,b=20,c=10,d=5,e=1;
    q=x/a;
    printf("%d number of a coin\n",q);
    p=x%a;
    y=p/b;
    printf("%d number of b coin\n",y);
    f=p%b;
    z=f/c;
    printf("%d number of c coin\n",z);
    g=f%c;
    r=g/d;
    printf("%d number of d coin\n",r);
    k=g%d;
    j=k/e;
    printf("%d number of e coin\n",j);
    return 0;
}
