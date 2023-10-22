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
                take the small number.
                swap and print array
```

- task 0: all good.
- task 1: fix betty.
- task 2: fix code, i have to take the smaller number, after that swap value.

# 2023-20-10

- add task 3:
- pseudocode

```
     choose pivet is muddle number ... and divid list / 2 each time ==> recursion
   QS (A as array, start as int, end as int)
   {
	   if (start < end)
		   privot = partition(A, start, end)
		   Quicksort(A, start, privot - 1)
		   Quicksort(A, privot + 1, end)
   }

	partition(A, start, end)
	{
		pivot A[end]
		i = start - 1

		loop j = start to end
			if (A[j] < pivot) then
                i++
                if i < j
				    swap (A[j], A[i]), print
        if array i > pivot
		    swap(pivot, A[i]), print
		return i
	}
```

- task 100:
- pseudocode

```
always if size < 2 return

generate the knith sequace by using n+1 = n * 3 + 1 // n+1 mean next generete gap.
back i use this by math,
    n = n * 3 + 1 => (n - 1) = n * 3 => (n - 1)/3 = n => n-1 = (n - 1)/3,  n-1: mean prev one
// list of generate gap [1, 4, 20, 13, 40, 121, 363 ... ]

while gap great than 0
    for i equal to gap and i last than size steep by one
        take index array i by sw(variable).
        for j equal to  i and j great or equal to gap and sw last than array j - gap steep j equal to j - g
            index j take value from array j - g
        indx j take value from sw
    steep by gap equal to  gap -  1 divied by  3
```

# 2023-22-10

- task 101:
- pseudocode:

```
if no node or just one return

while (True)
{
    loop swap element using bubble sort, print

    if no swap return ...

    loop swap element using bubnle sort inverse, print

    if no swap return
}
```
