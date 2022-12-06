#include <stdio.h>
#include <math.h>
void arraytpe(int *arr, int n)
{
    int i, count7 = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        while (arr[i] != 0)
        {
            count = arr[i] % 10;
            arr[i] = arr[i] / 10;
            if (count == 7)
            {
                count7++;
            }
        }
    }
    if (count7 >= ceil(n / 2))
    {
        printf("Beautiful");
    }
    else
        printf("Ugly");
}
void printArr(int * arr, int size)
{
    
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
    {
        printf("%d ", *arr);

        
        arr++;
    }
}

int main()
{
    int i, n, arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arraytpe(arr, n);
    
    return 0;
}