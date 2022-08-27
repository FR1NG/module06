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




[//]: # (note)
[//]: # (implicit cast means that the compiler cast for you auto)



