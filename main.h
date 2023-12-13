#ifndef MAIN_H
#define MAIN_H

#define GET_THE_INPUT_FROM_THE_USER "Get_Input/get_The_Input_From_The_User.c"
#define IS_IT_A_TERMINAL "Get_Input/is_It_A_Terminal.c"
#define READ_LINE "Get_Input/read_Line.c"
#define STRING_TOKENIZATION "Handle_String/string_Tokenization.c"
#define WRITE_FUNCTION "Handle_String/write_Function.c"
#define REMOVE_COMMENTS "Handle_Comments/remove_Comments.c"
#define HANDLE_QUOTES_AND_COMMENTS "Handle_Comments/handle_Quotes_And_Comments.c"
#define FREE_AND_ASSIGN_NULL "Handle_Memory_Allocation/free_And_Assign_Null.c"
#define FREE_AND_RETURN_NULL "Handle_Memory_Allocation/free_And_Return_Null.c"
#define FREE_THE_TWO_DIMENSIONAL_ARRAY "Handle_Memory_Allocation/free_The_Two_Dimensional_Array.c"
#define GET_BUILTIN_INDEX "Builtin_Commands/get_Builtin_Index.c"
#define PROCESS_BUILTIN_COMMAND "Builtin_Commands/process_Builtin_Command.c"
#define CHECK_IF_THE_COMMAND_IS_BUILTIN "Builtin_Commands/check_If_The_Command_Is_Builtin.c"
#define HANDLE_EXIT_INPUT "Builtin_Commands/Exit/handle_Exit_Input.c"
#define TERMINATE_SHELL "Builtin_Commands/Exit/terminate_Shell.c"
#define WRITE_ERROR_MESSAGE "Builtin_Commands/Exit/write_Error_Message.c"
#define DISPLAY_ENVIRONMENT "Builtin_Commands/Environment/display_Environment.c"
#define CONVERT_INTEGER_TO_STRING "Handle_Numbers/convert_Integer_To_String.c"
#define THE_GIVEN_INPUT_IS_POSITIVE_OR_NOT "Handle_Numbers/the_Given_Input_Is_Positive_Or_Not.c"
#define PARSE_COMMAND_INTO_TOKENS "Command_Into_Tokens/parse_Command_Into_Tokens.c"
#define ITERATE_AND_COUNT_TOKENS "Command_Into_Tokens/iterate_And_Count_Tokens.c"
#define CLEANUP_AFTER_EXECUTION "Execute_The_Given_Command/cleanup_After_Execution.c"
#define DISPLAY_ERROR_MESSAGE "Execute_The_Given_Command/display_error_message.c"
#define EXECUTE_CHILD_PROCESS "Execute_The_Given_Command/execute_Child_Process.c"
#define EXECUTE_THE_GIVEN_COMMAND "Execute_The_Given_Command/execute_The_Given_Command.c"
#define GET_EXIT_STATUS "Execute_The_Given_Command/get_Exit_Status.c"
#define HANDLE_EXECUTION_ERROR "Execute_The_Given_Command/handle_Execution_Error.c"
#define SET_ENVIRONMENT_VARIABLE "Builtin_Commands/Set_Environment_Variables/set_Environment_Variable.c"
#define HANDLE_SETENV_INPUT "Builtin_Commands/Set_Environment_Variables/handle_setenv_input.c"
#define HANDLE_UNSETENV_INPUT "Builtin_Commands/Unset_Environment_Variables/handle_Unsetenv_Input.c"
#define UNSET_ENVIRONMENT_VARIABLE "Builtin_Commands/Unset_Environment_Variables/unset_Environment_Variable.c"
#define GET_THE_ENVIRONMENT_VARIABLE "Execute_The_Given_Command/Handle_PATH/get_The_Environment_Variable.c"
#define GET_THE_PATH_OF_COMMAND "Execute_The_Given_Command/Handle_PATH/get_The_Path_Of_Command.c"
#define IS_IT_ABSOLUTE_PATH "Execute_The_Given_Command/Handle_PATH/is_Absolute_Path.c"
#define SEARCH_ENV_VAR_VALUE_PATH "Execute_The_Given_Command/Handle_PATH/search_And_Retrieve_Environment_Variable_Value.c"
#define SEARCH_IN_DIRECTORIES "Execute_The_Given_Command/Handle_PATH/search_In_Directories.c"
#define EXECUTE_COMMAND "The_Execute_Command/execute_Command.c"

extern char **environ;

#define unused(x) (void)(x)
#define NULL_VARIABLE(x) (x = NULL)
#define ZERO_VARIABLE(x) (x = 0)
#define V_CHARACTER char
#define V_INTEGER int
#define THE_DELIMITERS " \t\n"
#define INCREASE_BY_ONE(x) (x++)
#define DECREASE_BY_ONE(x) (x--)
#define theNull ((void *)0)
#define START_SHELL "<Shell>$ "
#define theBufferSize 1024
#define theStandardInput stdin
#define NEW_LINE "\n"
#define NEGATIVE_ONE -1
#define ZERO_STRING '0'
#define ZERO 0
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define NINE 9
#define TEN 10
#define theBufferSize 1024
#define FREE_VARIABLE(x) free(x)
#define INFINITY_LOOP true
#define THE_NULL_CHARACTER '\n'
#define THE_NULL_TERMINATOR '\0'
#define THE_PATH "PATH"
#define SLASH "/"
#define THE_COLON ":"
#define COLON_WHITESPACE ": "
#define EQUAL_SIGN "="
#define ERROR_MESSAGE_1 ": exit: Illegal number: "
#define ERROR_MESSAGE_2 ": not found\n"
#define ERROR_MESSAGE_3 "Error: Invalid number of arguments for setenv. Usage: setenv VARIABLE VALUE\n"
#define ERROR_MESSAGE_4 "Error: Invalid number of arguments for unsetenv. Usage: unsetenv VARIABLE\n"

typedef char *String;
typedef char **StringArray;
typedef int Integer;
typedef unsigned long int ULI;
typedef long int LI;
typedef struct stat theStatus;

#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <ctype.h>

Integer is_It_A_Terminal(int fileDescriptor);
String get_The_Input_From_The_User(void);
StringArray parse_Command_Into_Tokens(String theBuffer);
String free_And_Assign_Null(String AddressToFree);
String free_And_Return_Null(String theBuffer);
Integer iterate_And_Count_Tokens(String theToken);
ULI read_Line(StringArray pointerToBuffer,
ULI *theLengthOfBuffer, FILE *theStream);
String is_It_Absolute_Path(String theCommand);
String search_In_Directories(String thePathOfEnvironment, String theCommand);
String get_The_Path_Of_Command(String theCommand);
String get_The_Environment_Variable(String variable);
String search_And_Retrieve_Environment_Variable_Value(String variable,
Integer *index);
void execute_Child_Process(String theWholeCommand, StringArray theCommand);
void cleanup_After_Execution(pid_t theChildProcessID, Integer *theCondition,
StringArray theCommand, String theWholeCommand);
Integer handle_Execution_Error(StringArray argumentVector,
StringArray theCommand, Integer theIndex);
Integer get_Exit_Status(Integer theCondition);
Integer execute_The_Given_Command(StringArray theCommand,
StringArray argumentVector, Integer theIndex);
Integer the_Given_Input_Is_Positive_Or_Not(String theString);
Integer check_If_The_Command_Is_Builtin(String user_input);
Integer get_Builtin_Index(String command);
void process_Builtin_Command(StringArray user_command,
StringArray arguments, Integer *execution_status, Integer index);
void display_Environment(StringArray theGivenCommand,
Integer *execution_status);
void terminate_Shell(
StringArray theGivenCommand,
StringArray arguments, Integer *execution_status, Integer theIndex);
ssize_t write_Function_Standard_Error(const void *buf, size_t count);
ssize_t write_Function_Standard_Output(const void *buf, size_t count);
Integer handle_Exit_Input(
StringArray theGivenCommand, StringArray arguments,
Integer *execution_status, Integer theIndex);
void write_Error_Message(
StringArray arguments,
Integer theIndex, const String error_message, const String extra_message);
void display_Error_Message(
String program_name, String command, Integer theIndex);
String convert_Integer_To_String(Integer number);
Integer set_Environment_Variable(String variable, String value);
Integer unset_Environment_Variable(String variable);
Integer handle_Setenv_Input(
StringArray theGivenCommand,
StringArray arguments,
Integer *execution_status,
Integer theIndex);
Integer handle_Unsetenv_Input(
StringArray theGivenCommand,
StringArray arguments,
Integer *execution_status,
Integer theIndex);
void handle_Quotes_And_Comments(
String theInput, bool *inSingleQuote, bool *inDoubleQuote);
String remove_Comments(String input);
StringArray parse_Command_Into_Tokens_2(String theBuffer);
void free_The_Two_Dimensional_Array(StringArray theArray);
String string_Tokenization(String theString, String theDelimiters);
void execute_Command(StringArray theGivenCommand, StringArray argumentVector,
Integer *theCondition, Integer theIndex);

#endif
