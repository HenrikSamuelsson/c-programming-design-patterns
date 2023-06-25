# Opaque Pattern

## Definition

The opaque pattern makes the implementation details of an interface private, it becomes hidden from the user perspective.

## Motivation

The opaque pattern limits dependencies, the application code that uses the opaque object is prevented from depending on the implementation details of the opaque. The application will only use the public interface, actual implementation is intentionally hidden preventing the application from knowing details that could cause undesired coupling. The result is improved maintainability by enabling refactoring of the opaque without needing to worry about breaking the application that uses the opaque.

## Implementation

The opaque pattern builds on the object pattern with the difference that the attribute structure is only declared in the object header file. The complete definition of the attribute structure is placed in a source file and not in a header file.

See the below header file how the structure called `vehicle` is declared but not defined. This forward declaration enables an application to use the opaque without being aware on all the implementation details. After the declaration follows the public methods that the application can use to work with opaque objects instances.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/db16c488118135d57a03b3352b952cb9cd8cbdd8/opaque-pattern/opaque-pattern-project/vehicle.h#L1C1-L12>

## References

[Wikipedia - Opaque Pointer](https://en.wikipedia.org/wiki/Opaque_pointer)  
[Interrupt - Practical Design Patterns: Opaque Pointers and Objects in C](https://interrupt.memfault.com/blog/opaque-pointers#practical-design-patterns-opaque-pointers-and-objects-in-c)  
