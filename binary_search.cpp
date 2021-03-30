#include<stdio.h>

int upper_bound(int arr[], int N, int X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {

        mid = low + (high - low) / 2;

        if (X >= arr[mid])
        {
            low = mid + 1;
        }

        else
        {
            high = mid;
        }
    }

    return low;
}

int lower_bound(int arr[], int N, int X)
{
    int mid;

    int low = 0;
    int high = N;

    while (low < high)
    {
        mid = low + (high - low) / 2;

        if (X <= arr[mid])
        {
            high = mid;
        }

        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{
    return 0;
}