#include <stdio.h>
int swap(int *ptr1, int *ptr2, int arr[])
{
    int temp;
    temp = arr[*ptr1];
    arr[*ptr1] = arr[*ptr2];
    arr[*ptr2] = temp;
}
int main()
{
    int n, arr[1000], q, l, r, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d %d", &l, &r);
        swap(l, r, arr);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}