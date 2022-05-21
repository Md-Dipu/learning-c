### Sum all the numbers in an array

Given an incomplete program, you have to complete, count sum of all the elements of array named **_arr_** and displaying the result.

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    // Write your code here.

    return 0;
}
```

#### Checklist

1. Count sum of all the numbers/element of **_arr_**.
2. Display the result on screen.

#### Test Cases

**Case 0** (_input_):

```
5
23 89 21 51 19
```

**Case 0** (_output_):

```
203
```

**Case 1** (_input_):

```
7
106 72 129 298 85 9 61
```

**Case 1** (_output_):

```
760
```

**Case 2** (_input_):

```
10
11 -90 34 19 41 -6 0 50 45 -11
```

**Case 1** (_output_):

```
93
```
