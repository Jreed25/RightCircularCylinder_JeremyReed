# C++ Cylinder Calculator

A C++ program that calculates the surface area and volume of a right circular cylinder based on user-provided radius and height.

## Features

* Accepts radius and height from the user
* Validate radius and height values
* Calculate cylinder surface area
* Calculate cylinder volume
* Display results with formatted decimal precision

## Concepts Demonstrated

* Object-oriented programming
* Classes and encapsulation
* Constructors
* Getters and setters
* Input validation
* Mathematical calculations
* Separation of interface and implementation using `.h` and `.cpp` files

## Project Structure

```text
cylinder-calculator/
└── src/
    ├── main.cpp
    ├── Cylinder.cpp
    └── Cylinder.h
```

## How to Run

Compile the program with:

```bash
g++ src/main.cpp src/Cylinder.cpp -o main
```

Run it with:

```bash
./main
```

## Example

```text
Enter the cylinder's radius: 5
Enter the cylinder's height: 10

Here is the cylinder's data:
Radius of the cylinder: 5.00
Height of the cylinder: 10.00

Surface Area of the cylinder: 471.24
Volume of the cylinder: 785.40
```



