# Opaque Pattern

The opaque pattern builds on the object pattern meaning that the object pattern need to be understood before learning the opaque pattern.

## Definition

The opaque pattern makes the implementation details of an interface private, parts becomes hidden from the user.

## Motivation

The opaque pattern limits dependencies, the application code that uses the opaque object is prevented from depending on the implementation details of the opaque. The application will only use the public interface, actual implementation is intentionally hidden preventing the application from knowing details that could cause undesired coupling. The result is improved maintainability by enabling refactoring of the opaque without needing to worry about breaking the application that uses the opaque.

## Implementation

The opaque pattern builds on the object pattern with the difference that the attribute structure is only declared in the object header file. The complete definition of the attribute structure is placed in a source file and not in a header file.

See the below header file how the structure called `vehicle` is declared but not defined. This forward declaration enables an application to use the opaque without being aware on all the implementation details.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/f945bbc440c0caddcb73b7baa6bb960a60c975ff/opaque-pattern/opaque-pattern-project/vehicle.h#L3>

The full definition of the `vehicle` structure is placed in a C source file, see the below code listing.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/f945bbc440c0caddcb73b7baa6bb960a60c975ff/opaque-pattern/opaque-pattern-project/vehicle.c#L7-L11>

The application can create an use an opaque object after including the `vehicle.h` header file. Below follows a code snippet from an example application.

A vehicle object is allocated on the stack. The allocation requires knowledge about the size of the opaque object, this is by design provided by the opaque interface in the form of a function dedicated for this purpose.

After creation so can the vehicle object be used. In the accompanying project so is the vehicle accelerated and the current speed is read out from the object.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/a117f96876368ca691af46d2ea023cd8a566d998/opaque-pattern/opaque-pattern-project/main.c#L8-L13>

## References

[Embedded C Programming Design Patterns, Martin Schröder, 2023](https://a.co/d/58GRxaD)  
[Wikipedia - Opaque Pointer](https://en.wikipedia.org/wiki/Opaque_pointer)  
[Interrupt - Practical Design Patterns: Opaque Pointers and Objects in C](https://interrupt.memfault.com/blog/opaque-pointers#practical-design-patterns-opaque-pointers-and-objects-in-c)  
