# 2023-18-10

- start reading Resources.
- add task 0 **bubble sort**.
- pseudocode:

```
    always if array is not exist or size == 1
        return;
  Repeat n - 1 for sorting all element:
      inisialize swap with 0
      for idx start at 0 and at n - 1
          if array idx greater than array idx + 1
              swap
              if it swap than swapp take 1

      if no swapped exit, to void repeat loop.
```

# 2023-19-10

- add task 1 **insertion sort**
- pseudocode:

```
    for i start 1 to n - 1:
	   j = i
	   while j > 0 and A[j - 1] > A[j]
		   swap A[j] and A[j - 1] /* swap node insted of value */
		   j -= 1
    same at linked list
```

- add task 2 **selectiom sort**
- pseudocode:

```
    always if array is not exist or size == 1
        return;
    for i start 0 to size - 1 step by 1
        for j start at i + 1 to size step by 1
            if array i > array j
                swap and print array
```
