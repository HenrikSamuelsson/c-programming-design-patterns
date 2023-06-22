# Opaque Pattern

## Definition

The opaque pattern makes the implementation details of an interface private, it becomes hidden from the user perspective.

## Motivation

The implementation may be changed without the need to recompile the modules using it. This benefits the programmer as well since a simple interface can be created, and details can be hidden.

Limits dependencies, the code that uses the opaque object do not depend on the implementation of the opaque.

## Implementation

The opaque pointer builds on the object pattern with the difference that the attribute structure is only declared in the object header file. The complete definition of the attribute structure is placed in a source file and not in a header file.

## References

[Wikipedia - Opaque Pointer](https://en.wikipedia.org/wiki/Opaque_pointer)  
[Interrupt - Practical Design Patterns: Opaque Pointers and Objects in C](https://interrupt.memfault.com/blog/opaque-pointers#practical-design-patterns-opaque-pointers-and-objects-in-c)  
