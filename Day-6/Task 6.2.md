### Task 5.2: Transform string to uppercase and lowercase

Given an incomplete program, the purpose of this program is to display the string after transforming all the characters to uppercase and lowercase.

```
#include <stdio.h>
#include <string.h>

char trans_toupper(char ch) {
    // Write your code here
}

char trans_tolower(char ch) {
    // Write your code here
}

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    char upper_str[100];
    char lower_str[100];

    for (int i = 0; i < strlen(str); ++i) {
        // Write your code here
    }

    printf("%s", upper_str);
    printf("%s", lower_str);
    return 0;
}
```

#### Checklist

1. Complete trans_toupper function, this function takes a char type value as a parameter and returns another char type value which is transformed to uppercase of same character.
2. Complete trans_tolower function, this function takes a char type value as a parameter and returns another string which is transformed to lowercase of the same character.
3. Also, Complete the loop to transform the string and store at upper_str and lower_str.

#### Test Cases

**Case 0** (_input_):

```
This is C Program
```

**Case 0** (_output_):

```
THIS IS C PROGRAM
this is c program
```

**Case 1** (_input_):

```
Nam laoreet odio vel nisi egestas imperdiet tincidunt tempor leo.
```

**Case 1** (_output_):

```
NAM LAOREET ODIO VEL NISI EGESTAS IMPERDIET TINCIDUNT TEMPOR LEO.
nam laoreet odio vel nisi egestas imperdiet tincidunt tempor leo.
```

**Case 2** (_input_):

```
wc1h Mv9SNR lJGP DWZPZk JWrE048 vGUl9qzP faedDs PJt24 gZEj
```

**Case 2** (_output_):

```
WC1H MV9SNR LJGP DWZPZK JWRE048 VGUL9QZP FAEDDS PJT24 GZEJ
wc1h mv9snr ljgp dwzpzk jwre048 vgul9qzp faedds pjt24 gzej
```
