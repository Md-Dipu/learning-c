### Count working days

Write a program, that takes two inputs as starting date and ending date in "DD/MM/YYYY" in this format, count every day between this two date including 29's February if the year is a leap year, and print.

**_Here:_** \
0 < day <= 31 \
0 < month <= 12

#### Test Cases

**Case 0** (_input_):

```
01/01/2000
01/01/2001
```

**Case 0** (_output_):

```
367
```

**Case 1** (_input_):

```
01/01/2000
02/01/2000
```

**Case 1** (_output_):

```
2
```

**Case 2** (_input_):

```
05/05/2002
23/05/2022
```

**Case 2** (_output_):

```
7324
```

> Optional

- Try to use lavel like "Starting Date:" before input and output.
- Try not to count Fridays as working days (if needed take more one input).
