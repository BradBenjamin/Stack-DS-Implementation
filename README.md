# Stack Implementation (C++)

## Overview
A dynamic array-based **Stack** implementation in C++ with push, pop, and top operations.

## Features
- **Dynamic resizing**: Stack doubles capacity when full.
- **Operations**:
  - `push(e)`: Adds an element.
  - `pop()`: Removes and returns the top element.
  - `top()`: Returns the top element without removing it.
  - `isEmpty()`: Checks if the stack is empty.

## Compilation & Execution
```bash
g++ -o Stack Stack.cpp Stack.h -std=c++11
./Stack
```

## Usage
```cpp
Stack s;
s.push(10);
s.push(20);
cout << s.top(); // 20
s.pop();
cout << s.isEmpty(); // false
```

## License
MIT License – Free to use and modify.
