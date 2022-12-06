#include <stdio.h>
int main()
{
    int x, y, *ptrx, *ptry;
    printf("Enter Two integer: ");
    scanf("%d%d",&x,&y);
    ptrx = &x;
    ptry = &y;
    printf("%d %d", *ptrx, *ptry);
    return 0;
}