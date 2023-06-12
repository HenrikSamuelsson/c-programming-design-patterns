# Object Pattern

## Definition

The object pattern groups data and associated functions into a hierarchy. The object is provided as an argument to functions, making it flow along the code path, as opposed to having functions work on global external data.

## Motivation

Improves the organization of the source code making it easier to visualize due to that the data flow is always through the code.

Control of the data scope prevents unintentional data manipulation.

Codes becomes testable by enabling compilation in isolation and mocking.

## Implementation

The structure of the object type and public methods for the object type are declared in a header file that have the same name as the object. First there is a struct that functions as a class definition describing the variables that belong to objects of the class. The methods are part of the class are listed as function declarations below the struct. Functions names are prefixed with the object name to indicate that these are class specific.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/5b7a7494547beae6539452328e3aec7f47c1e0b7/object-pattern/object-pattern-project/example_object.h#L3-L9>

The functions belonging to an object are then defined in a c file. This source file will like the header file be named the same as the name of the object type.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/5b7a7494547beae6539452328e3aec7f47c1e0b7/object-pattern/object-pattern-project/example_object.c#L5-L9>

## Note

The object pattern is also known as the object oriented programming pattern.
