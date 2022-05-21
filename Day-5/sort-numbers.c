#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (true)
    {
        bool success_s = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
                continue;

            int temp_e = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp_e;
            success_s = false;
        }

        if (success_s)
            break;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}