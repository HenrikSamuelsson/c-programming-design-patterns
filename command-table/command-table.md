# Command Table

## Introduction

Command tables is a design pattern that minimizes the complexity of command parsers.

## Motivation

Command processing is a common feature in many systems. A command is received and the system shall take a required action causing a change to the system state.

The command will enter the system by reception in some messaging protocol from which the command will need to be parsed out and identified. Common ways to parse the command in C is to rely on:

- Chains of `if` - `else`  statements
- A `switch` statement with multiple `case` clauses

The above mentioned parsing strategies are viable for a small command set, but the code quality will suffer if there are many commands, due to readability issues of long functions with either multiple `if` `else` combinations, or a 'switch' with a long list of `case`'s.

The cyclomatic complexity will also increase causing warnings from static code checkers.

## Implementation

The command table implementation is based around four entities:

1. An `enum` holding all commands the system shall handle
2. A `struct` holding all information necessary to execute a command
3. A table mapping each commands to an action
4. A function that triggers execution upon command reception

Listing 1: Example `enum` with commands for remote controlled robot four wheeled robot:

``` c
typedef enum RobotCommand_t
{
  DRIVE_DIRECTION,    /**< Drive backwards or forward */
  SPEED,              /**< Desired speed */
  TURNING_ANGLE,      /**< Angle of front axle, adjusts turning */
  CAMERA_MODE         /**< Adjust mode of on-bard camera */
  COMMAND_COUNT       /**< Number of available commands */
};
```

Listing 2: `struct` for command information

``` c
typedef struct
{
  RobotCommand_t command;
  bool (*commandFunction)(CommandPacket_t * data);
} CommandRxInfo_t;
```

Listing 3: Table that maps commands and actions

``` c
CommandRxInfo_t const robotCommandTable[] =
{
  {DRIVE_DIRECTION,    handleDriveDirectionCommand},
  {SPEED,              handleSpeedCommand         },
  {TURNING_ANGLE,      handleTurningAngleCommand  },
  {CAMERA_MODE,        handleCameraModeCommand    },
  {COMMAND_COUNT,      NULL                       }
}
```

Listing 4: Function to trigger the handling of a command

``` c
bool processRobotCommand(CommandPacket_t const * const packet)
{
  bool result = false;
  if (packet->command < COMMAND_COUNT)
  {
    result = (*robotCommandTable[packet]->command,)(packet);
  }
  return result;
}
```

The code in Listing 4 that processes the command simply accesses a row in the table to lookup the action to take on the command and executes it.

New commands can be added by just adding one entry to the `RobotCommand_t enum` and the `robotCommandTable`. Of course there also needs to be added an implementation of the function for what shall happen when the command is received.

## References

Embedded Software Design, Jacob Beningo, 2022, Apress
