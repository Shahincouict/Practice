#include <stdio.h>
int main()
{
    int i, j, n, sum = 0, arr[1000];
    scanf("%d", &n);
  
    for (i = 1; i <= n; i++)
    {
        arr[i]=i;
    }
     for (i = 1 ;i<= n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=1;i<=n;i++){
        sum+=arr[i];
    }
    for(i=4;i<=6;i++){
        sum-=arr[i];
    }

}