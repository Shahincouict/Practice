#include <stdio.h>
int total_sum(int *arr, int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {

        if (i % 2 == 0 && arr[i] % 2 == 0)
        {
            sum += (arr[i] + i);
        }
        if (i % 2 != 0 && arr[i] % 2 != 0)
        {
            sum += (arr[i] + i);
        }
    }
    return sum;
}
int main()
{
    int n, arr[1000], i, ans = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ans = total_sum(arr, n);
    printf("%d\n", ans);
    return 0;
}