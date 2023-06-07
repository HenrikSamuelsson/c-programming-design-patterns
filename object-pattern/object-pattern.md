# Object Pattern

## Definition

The object pattern groups data and associated functions into  hierarchy. The data is provided as an argument to functions, making it flow along the code path, as opposed to having functions work on global external data.

## Motivation

Improves the organization of the source code making it easier to visualize due to that:

- The data flow is always through the code
- Control of the data scope prevents unintentional data manipulation
- Functions are always re-entrant by design

Simpler to get multi-threaded programming correct due to that the design makes it easier to grasp the data that needs to be protected by locking mechanisms.

Codes becomes testable by enabling compilation in isolation and mocking.

## Note

The object pattern is also known as the object oriented programming pattern.
