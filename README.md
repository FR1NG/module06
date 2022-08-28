# module06
cpp 42 piscine , module about casting


# Introduction :

in this module we are going to talk about casting, what is casting and what are the types of casting.

### what is casting 

casting is forcing a datatype to be converted to an other datatype.

in c++ there are 4 types of casting.

- static cast

- dynamic cast

- const cast

- reinterpret cast

## static casting :

static convention is a type convention performed on the compile time, that used to convert two types like , converting `float` to `int` you can also convert between pointers and references.

### syntax :
```c++
type var = static_cast<type>(expression)
```

type is the type that we want to cast expression to.

### example :

```c++
#include <iostream>

int main()
{
    float x;
    int   y;

    x = 13.37;
    y = 42;
    float z = static_cast<int>(x + y);
    std::cout << z << std::endl;
    return 0;
  }
```

on this example we have cated the result of addition between an integer and a float to a float variable.

**output :**

    55

# reinterpret cast

this type of cast is used to cast from one pointer data type to another pointer datatype, it is a dangerous type of casting because it will type cast any pointer to another what will potentially lead to an undefined behavior if you don't know what you are doing.
so the programmer have to take responsability for the consequences.

## example

```c++
#include <iostream>

int main()
{
    int *i = new int(42);
    char *c = reinterpret_cast<char *>(i);
    
    std::cout << *i << std::endl;
    std::cout << *c << std::endl;
    return 0;
}
```

# dynamic cast

is a type cast that used for one reason, the reason that is used for is to cast between base class and derived class.
let consider `BASE` a base class and `A` and `B` are two classes derived from `BASE`, we can cast `A` object pointer to `Base` pointer and we can cast it back to `A` but we can not cast it to `B` .

for this reason we use `dynamic cast`.

## sysntax :

```c++
dynamic_cast<new_type>(expression)
```

- to use dynamic cast , the base class must contain at least one virtual member function.
- if new_type is a pointer, in case of success the cast returns a value of type new_type, in case of fail it returns a nullptr.
- if new_type is a reference is case of success it returns a value of type new_type, in case of fail a std::bad_cast exception will be thrown.

## example :

```c++
#include <iostream>

class Base {
public:
    virtual ~Base(){};
};

class A: public Base {};

class B: public Base{};

int main(void)
{
    Base *base = new A();
    A *a = dynamic_cast<A *>(base); //this will cast successfully base to A pointer, because it is holding an object of A.
    B *b = dynamic_cast<B *>(base); //this will return a nullptr.

    if (a == nullptr)
        std::cout << "failed to cast to A pointer" << std::endl;
    else
        std::cout << "casting to A pointer succeed" << std::endl;

    if (b == nullptr)
        std::cout << "failed to cast to B pointer" << std::endl;
    else
        std::cout << "casting to B pointer succeed" << std::endl;


    try {
        A &a1 = dynamic_cast<A&>(*base);
        std::cout << "casted successfully to A reference" << std::endl;
    } catch (...) {
        std::cout << "cast fail to A reference" << std::endl;
    }

    try {
        B &a1 = dynamic_cast<B&>(*base);
        std::cout << "casted successfully to A reference" << std::endl;
    } catch (...) {
        std::cout << "cast fail to B reference" << std::endl;
    }
}
```

## output :

    casting to A pointer succeed
    failed to cast to B pointer
    casted successfully to A reference
    cast fail to B reference




[//]: # (note)
[//]: # (implicit cast means that the compiler cast for you auto)



