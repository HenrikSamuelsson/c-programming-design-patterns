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

### Basic Implementation

In C a singleton can simply by implemented by a global variable. Typically defined in a c file and declared in h file that other files can include to gain access to the singleton.

In file `singleton_int.c`:

```c
int singletonInt = 42;
```

In file `singleton_int.h`:

```c
extern int singletonInt;
```

In file `main.c`:

```c
printf("Our singleton int equals %d", singletonInt);
```

### Basic Implementation Variant

Another variant is to use a static function locale variable to avoid the global variable.

```c
int* singletonInt() {
     static int instance = 42;
     return &instance;
 }
```

```c
printf("Our singleton int equals %d", *singletonInt());
```

### Thread Safe Implementation

In a multithreaded environment the implementation will need to be made thread safe. This can be achieved by wrapping writes to the singleton within a critical section or similar, depending on what is supported by the platform.

As an example say that we have an embedded system running FreeRTOS. A singleton can then be implemented in a thread safe way using the pair of macros called `taskENTER_CRITICAL` and `taskEXIT_CRITICAL`.

```c
struct A
{
    int x;
    int y;
};

struct A* getObject()
{
    static struct A *instance = NULL;

    taskENTER_CRITICAL();
    if (instance == NULL)
    {
        instance = malloc(sizeof(*instance));
        instance->x = 1;
        instance->y = 2;
    }
   taskEXIT_CRITICAL();

    return instance;
};
```

### References

[StackOverflow Singleton in C](https://stackoverflow.com/questions/803673/how-to-create-a-singleton-in-c)  
[FreeRTOS Critical Section](https://www.freertos.org/taskENTER_CRITICAL_taskEXIT_CRITICAL.html)  
