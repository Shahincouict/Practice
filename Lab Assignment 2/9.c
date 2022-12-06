#include <stdio.h>
#include <math.h>
int prime_numbers(int arr[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 2; j < arr[i] / 2; j++)
        {
            if (arr[i] % j != 0)
            {
                count++;
                break;
            }
        }
    }
    return count;
}
float average_of_all_even_integers(int arr[], int n)
{
    int i;
    float count = 0, evennum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count += arr[i];
            evennum++;
        }
    }
    float average = count / evennum;
    return average;
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
    int n, arr[1000], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers: %d\n", prime_numbers(arr, n));
    printf("Average of all even integers: %0.2f\n", average_of_all_even_integers(arr, n));
    printArr(arr, n);
    return 0;
}