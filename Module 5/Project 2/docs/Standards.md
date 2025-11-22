# Airgead Banking Standards Document
**Airgead Banking | [cite_start]2019** [cite: 60, 61]

## Table of Contents
1. [Coding Best Practices to be Followed](#coding-best-practices-to-be-followed)
2. [Safety](#safety)
3. [Style](#style)
4. [Maintainability](#maintainability)
5. [Portability](#portability)
6. [References](#references)

---

## Coding Best Practices to be Followed

### Safety
* **Return values by reference:** Returning values from functions by reference can have significant performance savings when the normal use of the returned value is for observation[cite: 67].
* [cite_start]**Avoid raw memory access:** Use smart pointers instead of manual memory management[cite: 68].

**Bad Idea**
```cpp
MyClass *myobj = new MyClass;
// ...
delete myobj;
```
**Good Idea**
```cpp
// C++14
auto myobj = std::make_unique<MyClass>(constructor_param1, constructor_param2);

// C++11
auto myobj = std::unique_ptr<MyClass>(new MyClass(constructor_param1, constructor_param2));

// Arrays
auto mybuffer = std::make_unique<char[]>(length); // C++14
auto mybuffer = std::unique_ptr<char[]>(new char[length]); // C++11

// Reference counted objects
auto myobj = std::make_shared<MyClass>();

// myobj is automatically freed for you whenever it is no longer used.
```

* **Use exceptions:** Utilize try/catch blocks to handle errors.

* **Casts:** Use C++-style casts instead of C-style casts.

### Style

## Common C++ Naming Conventions:


* *Types*: Start with upper case (e.g., MyClass).


* *Functions and variables*: Start with lower case (e.g., myMethod).


* *Constants*: All upper case (e.g., const double PI=3.14159265358979323;).

## Standard Library/Boost styles:

* Macro names use upper case with underscores: INT_MAX.

* Template parameter names use camel case: InputIterator.

* All other names use snake case: unordered_map.


* *Variable names*: Follow camel case notation.

## Specific Airgead Banking Requirements:

* (1) Distinguish private object data:

* Name private data with an `m_` prefix to distinguish it from public data. The `m_` stands for "member" data.

* (2) Distinguish function parameters:

* Name function parameters with a `t_` prefix. The `t_` can be thought of as "the," but the meaning is arbitrary.

* The point is to distinguish function parameters from other variables in scope while using a consistent naming strategy.

Example: 
```cpp
struct Size
{
    int width;
    int height;
    // Initialize with t_ prefix for parameters
    Size(int t_width, int t_height): width(t_width), height(t_height) {}
};

// This version might make sense for thread safety or data hiding
class PrivateSize
{
public:
    // Public accessors
    int width() const { return m_width; }
    int height() const { return m_height; }

    // Constructor using t_ prefix for parameters and m_ for members
    PrivateSize(int t_width, int t_height): m_width(t_width), m_height(t_height) {}

private:
    // Private members using m_ prefix
    int m_width;
    int m_height;
};
```

### Maintainability

* Avoid using `assert()`: Using `assert()` causes the program to fail when something unexpected happens. Consider using `try/catch`.

* Readability: Write your code and comment on it as if a non-programmer were reading it. Readable code is easy to understand.

* Refactoring: When needed, refactor code to improve its use.

* Error Handling: Properly utilize `try/catch` statements. These keywords prevent your code from running at the client side due to run-time errors and enable the program to "exit gracefully" with proper error messages as well as continue program execution.

### Portability 
* *Minimal main()*: Have minimal code in main(). Most of your code should be in classes, and main is used simply as a driver to instantiate objects of these classes and call proper functions.


* *Use header files*: Your class prototype should exist in an .h file while the body of that class should exist in a .cpp file.
Example: tree.h and tree.cpp

```cpp 
// tree.h
class tree
{
public:
    double height;
    void SetHight(double h);
    double GetHeight();
};
```

```cpp
// tree.cpp
#include "tree.h"
void Tree::SetHight(double h)
{
    height = h;
}
double Tree::GetHeight()
{
    return height;
}
```

## The #define Guard:

* All header files should have #define guards to prevent multiple inclusion.

* The format of the symbol name should be <PROJECT>_<PATH>_<FILE>_H_.

* To guarantee uniqueness, they should be based on the full path in a project's source tree.

Example: For the file foo/src/bar/baz.h in project foo, the guard should be:

```cpp
#ifndef FOO_SRC_BAR_BAZ_H_
#define FOO_SRC_BAR_BAZ_H_

// code ... 

#endif  // FOO_SRC_BAR_BAZ_H_
```

### References
* Google C++ Style Guide. (n.d.). Retrieved from https://google.github.io/styleguide/cppguide.html 

* Turner, J. (2019, June 06). GitHub Collaborative Collection of C++ Best Practices. Retrieved from https://github.com/lefticus/cppbestpractices