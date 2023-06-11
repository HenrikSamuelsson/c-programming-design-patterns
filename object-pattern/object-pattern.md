# Object Pattern

## Definition

The object pattern groups data and associated functions into a hierarchy. The object is provided as an argument to functions, making it flow along the code path, as opposed to having functions work on global external data.

## Motivation

Improves the organization of the source code making it easier to visualize due to that the data flow is always through the code.

Control of the data scope prevents unintentional data manipulation.

Codes becomes testable by enabling compilation in isolation and mocking.

## Implementation

The structure of the object and public methods for the object are declared in a header file that have the same name as the object.

https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/5b7a7494547beae6539452328e3aec7f47c1e0b7/object-pattern/object-pattern-project/example_object.h#L3-L9

## Note

The object pattern is also known as the object oriented programming pattern.
