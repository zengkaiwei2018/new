#include<stdio.h>
int main()
{
    int i=0xAABBCCDD;
    char *p;
    int j=5;
    p=(char*)&i;
    printf("p=%x\n");
    printf("&i=%x\n,&i");
    printf("*(p+3)=%x\n",*(p+3));
    printf("*p=%x\n",*p);
    return 0;
}
