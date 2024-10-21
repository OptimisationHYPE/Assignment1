# Programming Task 1 |  Simplex Method
**Introduction to Optimization - Fall 2024**


## Team
- **Elina Kuzmicheva**  
- **Maxim Fomin**   
- **Sergei Melnikov**   

## Programming Language
- **C++**

## Input Format
The input contains:
- A vector of coefficients of the objective function `C`.
- A matrix of coefficients of the constraint function `A`.
- A vector of right-hand side numbers `b`.
- The approximation accuracy `ε`.

## Test Cases

### Test 1: Regular Two-Dimensional Problem
Maximize:
z = 2x₁ + x₂

Subject to:

- `x₁ + x₂ ≤ 5`
- `-x₁ + x₂ ≤ 2`
- `x₁, x₂ ≥ 0`

Input:
```
2 1

1 1
-1 1

5 2

0.1
```
Output:
```
Normal finish
z = 10.000000
Solution: 5.000000 0
```

### Test 2: Unbounded Problem
Maximize:
z = 4x₁ + x₂

Subject to:

- `-x₁ + x₂ ≤ 6`
- `-x₁ + x₂ ≥ -3`
- `x₁, x₂ ≥ 0`

Input:
> Second line is multiplied by -1
```
4 1

-1 1
1 -1

6 3

0.1
```
Output:
```
Unbounded solution
```

### Test 3: Three-Variable Maximization
Maximize:
z = 2x₁ + 3x₂ - x₃

Subject to:

- `2x₁ - x₂ - 2x₃ ≤ 16`
- `3x₁ + 2x₂ - 3x₃ ≤ 18`
- `-x₁ + 3x₂ + 4x₃ ≤ 24`
- `x₁, x₂, x₃ ≥ 0`

Input:
```
2 3 -1

2 -1 -2
3 2 -3
-1 3 4

16 18 24

0.1
```
Output:
```
Normal finish
z = 25.636364
Solution: 0.545455 8.181818 0
```

### Test 4: Multi-Variable Maximization
Maximize:
z = 9x₁ + 10x₂ + 16x₃

Subject to:

- `18x₁ + 15x₂ + 12x₃ ≤ 360`
- `6x₁ + 4x₂ + 8x₃ ≤ 192`
- `5x₁ + 3x₂ + 3x₃ ≤ 180`
- `x₁, x₂, x₃ ≥ 0`

Input:
```
9 10 16

18 15 12
6 4 8
5 3 3

360 192 180

0.1
```
Output:
```
Normal finish
z = 400.000000
Solution: 0 8.000000 20.000000
```

### Test 5: Minimization Problem
Minimize:
z = -2x₁ + 2x₂ - 6x₃

Subject to:

- `2x₁ + x₂ - 2x₃ ≤ 24`
- `x₁ + 2x₂ + 4x₃ ≤ 23`
- `x₁ - x₂ + 2x₃ ≤ 10`
- `x₁, x₂, x₃ ≥ 0`

Input:
> Input changed (solving like maximization problem)
```
2 -2 6

2 1 -2
1 2 4
1 -1 2

24 23 10

0.1
```
Output:
```
Normal finish
z = 30.750000
Solution: 0 0.750000 5.375000
```
