#include <stdio.h>
int main()
{
    int arr[] = {5, 8, 107, 9, 4,78,5,2,8};
    int n = sizeof(arr) / 4;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (mx < arr[i])
            mx = arr[i];

        printf("%d", mx);
    }
    return 0;
}