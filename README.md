# Convert To Coins

A C++ program that converts a dollar amount into the fewest coins possible (quarters, dimes, nickels, and pennies) using recursion.

## Usage

Compile and run, then enter a dollar amount when prompted. Enter `-1` to exit.

```
Enter a $ amount...
$1.37

Coin TOTAL
---------------------------
Quarters = 5  $1.25
Dimes    = 1  $0.10
Nickels  = 0  $0.00
Pennies  = 2  $0.02
---------------------------
TOTAL COINS = 8
```

## Build

```bash
g++ inf231-week5final.cpp -o convert-to-coins
./convert-to-coins
```

## About

Coursework project (INF231) demonstrating recursion and user input handling in C++.
