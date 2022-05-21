### Sort array of number

Given an incomplete program, you have to complete, now sort an array of number named **_arr_** from lowest to highest.

```
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Write your code here

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

#### Checklist

1. Sort the numbers of **_arr_**.
2. Sorting should be lowest to highest.
3. Make changes of **_arr_**.

#### Test Cases

**Case 0** (_input_):

```
5
90 78 19 11 63
```

**Case 0** (_output_):

```
11 19 63 78 90
```

**Case 1** (_input_):

```
6
2 3 9 0 1 2
```

**Case 1** (_output_):

```
0 1 2 2 3 9
```

**Case 2** (_input_):

```
9
6 2 -1 4 0 1 4 5 3
```

**Case 1** (_output_):

```
-1 0 1 2 3 4 4 5 6
```
