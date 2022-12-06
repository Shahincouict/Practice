#include <stdio.h>
int divisible_by_3(int n,int arr[])
{
    int  i, count = 0;
   
    for (i = 0; i <n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }
    return count;
}
int divisible_by_5(int n,int arr[])
{
    int  i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0)
        {
            count++;
            if (arr[i] % 3 == 0)
            {
                count--;
            }
        }
    }
    return count;
}
int main()
{
    int n, arr[1000], i, ans;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
      ans=divisible_by_3(n,arr)+divisible_by_5(n,arr);
    if (ans == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n", ans);
    }
    return 0;
}