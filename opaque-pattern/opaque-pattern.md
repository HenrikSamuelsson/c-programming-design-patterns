# Opaque Pattern

## Definition

The opaque pattern makes the implementation details of an interface private, it becomes hidden from the user perspective.

## Motivation

The opaque pattern limits dependencies, the application code that uses the opaque object can not depend on the implementation of the opaque. The application can only use the public interface, actual implementation is hidden, intentionally preventing the application from knowing details that could cause undesired coupling. The result is improved maintainability enabling refactoring of the opaque without needing to worry about breaking the application that uses the opaque.

## Implementation

The opaque pointer builds on the object pattern with the difference that the attribute structure is only declared in the object header file. The complete definition of the attribute structure is placed in a source file and not in a header file.

## References

[Wikipedia - Opaque Pointer](https://en.wikipedia.org/wiki/Opaque_pointer)  
[Interrupt - Practical Design Patterns: Opaque Pointers and Objects in C](https://interrupt.memfault.com/blog/opaque-pointers#practical-design-patterns-opaque-pointers-and-objects-in-c)  
