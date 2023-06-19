# Object Pattern

## Definition

The object pattern groups data and associated functions into a hierarchy. The object it self is provided as an argument to the object functions, making the data flow along the code path, as opposed to having functions work on external data.

## Motivation

Improves the organization of the source code making it easier to visualize due to that the data flow is always through the code.

Control of the data scope prevents unintentional data manipulation.

Codes becomes testable by enabling compilation in isolation with mocked input.

## Implementation

The object patterns is implemented in three different principal parts:

1. Structure of object data and declaration of functions for working with the object.
2. Function definitions, will always take and object pointer as input.
3. Object definitions in the application, the actual object instances.

The structure of the object type and public methods for the object type are declared in a header file that have the same name as the object. First there is a struct that functions as a class definition describing the variables that belong to objects of the class. The methods are part of the class are listed as function declarations below the struct. Functions names are prefixed with the object name to indicate that these are class specific.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/6e3ff0c7f9cbb38e0598445c81a8d04cb8a2c25a/object-pattern/object-pattern-project/vehicle.h#L31-L13>

The functions belonging to an object are then defined in a c file. This source file will like the header file be named the same as the name of the object type.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/6e3ff0c7f9cbb38e0598445c81a8d04cb8a2c25a/object-pattern/object-pattern-project/vehicle.c#L5-L9>

The header file is then included in the application files to be able to create objects and then invoke the object specific function calls as needed.

<https://github.com/HenrikSamuelsson/c-programming-design-patterns/blob/6e3ff0c7f9cbb38e0598445c81a8d04cb8a2c25a/object-pattern/object-pattern-project/main.c#L7-L17>

## Notes

The object pattern is also known as the object oriented programming pattern. This name comes from that the object pattern implements some concepts from object oriented programming.

Context shall be passed as an parameter to object functions by including a pointer to the object it self as the first parameter, this parameter shall be named self. This is to have the data flow along the code path which makes it easier to understand and debug the code base.

Object functions are not allowed to access any global data, object functions are also not allowed to have static data. These two constraints ensures reentrancy and testability by feeding the functions with mocked data.
