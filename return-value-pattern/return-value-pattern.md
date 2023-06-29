# Return Value Pattern

## Definition

The return value pattern handles error status reporting from function calls in a standardized way, failures are communicated by the use of a specified set of function return values.

## Motivation

Speeds up development once the pattern is learned due to that all functions behaves in the same way when it comes to status reporting.

## Implementation

Every function that can fail shall return status value. The status values shall be a signed int due to that both negative and positive values are used as status. The status value space is divided into three parts:

- Zero means no error, this is the normal expected result
- Negative values indicates failure, the value itself specifies what type off error occurred, these are chosen from a predefined standardized list of codes
- Positive values are function specific and indicates successful operation to some extent
