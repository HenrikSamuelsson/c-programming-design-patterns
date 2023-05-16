# Singleton

## Definition

Singleton is a design pattern that ensures that there is one and only one instance of an object. An access point to the instance is globally provided throughout the application.

## Motivation

There are use cases where it is essential that that only a single instance of a class shall exist in the system, this will by design be guaranteed by the Singleton pattern. The one instance will be easily accessible since it is globally available. It is ensured that additional instances of the class can not be created by mistake.

## Use Cases

### Logging

A system can have a log where events are stored to be able to see what have happened in the system. All the submodules will typically write to the same single global log.

### Subsystems

Certain subsystem can be known to always have only a single instance. Examples are; power manager, system initialization, and networking stack.

### Configuration

A system will often have a configuration and can then only be one of these and can be implemented as a singleton.

## Implementation

In C a singleton can simply by implemented by a static global variable.

```c
int singletonInt = 42;
```
