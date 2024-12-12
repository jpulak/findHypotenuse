# findHypotenuse
Given two numbers that represent the lengths of a right triangle's legs (sides adjacent to the right angle), output the length of the third side (i.e. hypotenuse) with two digits after the decimal point.

First prompt the user to enter both legs of the triangle, as type double. Then output the hypotenuse as a double with two digits after the decimal point, which can be achieved by executing:
```
cout << fixed << setprecision(2);
```

once before all other cout statements. You'll need to include the iomanip library for the precision functions.

Ex: If the input is:
```
3.0 4.0
```
the output is:
```
Hypotenuse: 5.00
```
The cmath library provides math functions which may be useful for this problem.

Example Output
Suppose the user types 3 and 7 for the two legs of the right triangle. Your complete program output should look like this:
```
Enter first triangle side: 3
Enter second triangle side: 7
Hypotenuse: 7.62
```
In zyLabs, complete program output will not include the user input, so the complete output above may look like the following in zyLabs:

Enter first triangle side: Enter second triangle side: Hypotenuse: 7.62
