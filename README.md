# README for Triangle Area Calculation

Author: Rowan Stratton
Date Created: January 7, 2021

## Description

This C++ program calculates and displays the areas of two triangles. The first triangle is defined by sides `side1` and `side2`, and the second triangle is defined by sides `side3` and `side4`. The program uses the formula for the area of a triangle, which is `(base * height) / 2`, to compute the areas.

## Usage

To run the program, follow these steps:

1. Open a C++ development environment or code editor that supports C++.
2. Create a new C++ project or file.
3. Copy and paste the provided code from `main.cpp` into your project or file.
4. Build and run the program.

The program will calculate and display the areas of both triangles with their respective side lengths.

## Code Explanation

The code consists of the following key components:

### Variables
- `side1` and `side2`: These variables store the lengths of the sides of the first triangle.
- `area`: This variable stores the calculated area of the first triangle.
- `side3` and `side4`: These variables store the lengths of the sides of the second triangle.
- `area1`: This variable stores the calculated area of the second triangle.

### Calculation
- The program calculates the area of the first triangle using the formula `(side1 * side2) / 2` and stores it in the `area` variable.
- It then updates the values of `side3` and `side4` by multiplying `side1` and `side2` by 5, respectively.
- The program calculates the area of the second triangle using the updated values of `side3` and `side4` and stores it in the `area1` variable.

### Output
- The program displays the sides and areas of both triangles using `cout`.
- For the second triangle, it uses `fixed` and `setprecision(1)` to format the output with one decimal place.

## Example Output

```
The sides of the triangle measure 3 and 4. The area is 6.
The sides of the triangle measure 15.0 and 20.0. The area is 150.0.
```

## License

This code is provided as-is without any warranty. You are free to use and modify it for your purposes.
