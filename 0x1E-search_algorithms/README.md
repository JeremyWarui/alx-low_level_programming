# 0x1E. C - Search Algorithms

---

> Projects focused on learning the search algorithms using C

## TASKS

**0. Linear search**

`0-linear.c` - contains function that searches for a value in an array of integers using the Linear search algorithm

**1. Binary search**

`1-binary.c` - has a function that searches for a value in a sorted array of integers using the Binary search algorithm

**2. Big O #0**

`2-0` - the time complexity (worst case) of a linear search in an array of size n

**3. Big O #1**

`3-O` - the space complexity (worst case) of an iterative linear search algorithm in an array of size n

**4. Big O #2**

`4-O` - the time complexity (worst case) of a binary search in an array of size n

**5. Big O #3**

`5-O` - the space complexity (worst case) of a binary search in an array of size n

**6. Big O #4**

`6-O` - the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

**7. Jump search**

`100-jump.c` - a function that searches for a value in a sorted array of integers using the Jump search algorithm

**8. Big O #5**

`101-O` - the time complexity (average case) of a jump search in an array of size n, using `step = sqrt(n)`
