#include <stdio.h>

/*  Header Files
    * Header files are predefined functions to make programming areas.
    * Header files contain a set of predefined standard library functions.
    * A header is a file with the extension'.h' which contains C functions declarations and macro definations to be shared between several files.
    * The C pre-processor is not part of the compiler, but is a separte step in the compilation process.
    * Before a C program is compiled in a compiler, source code is processed by a program called preprocessor.
    * This process is called preprocessing.
    * Commands used in preprocessor are called preprocessor directives and they begin with “#” symbol.
    * Preprocessors
        * Macro -> synatx: #define -> Defines constant values of any basic type.
        * Header file inclusion -> syntx: #include -> The source code of the file "file_name" is included in the min progrm at the specific place.
        * conditional compilation -> syntax: #ifdef, #endif, #if, #else, #ifndef -> set of commands are included/excluded w.r.t the condition.
    * OTHERS:
        * #undef -> used to undefine a macro variable.
        * #Pragma -> used to call a function before and after the main functions in a C program.

    * Types of header files.
        * Standard library
            * stdio.h -> i/o inputs, files
            * math.h -> math functions
            * iostream.h -> cin and cout**
            * string.h
            * time.h
        * User defined
            * syntax: #include "file_name" 
*/