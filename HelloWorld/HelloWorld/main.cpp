// Preprocessor statement, header file to get declarations of different functions.
// Declaration: this function exist.
// Definition: this is what this function is.
#include <iostream>

// Declaration: importing from Log.cpp
// Linker finds this function that has a body somewhere.
// In Windows, each cpp file contributes to an object through a compiler. Linker gets information from the object.
void Log(const char*);
// = void Log(const char* msg);
int Multiply(int, int);

// Return type: int -> return nothing = return 0.
// Main function: entry point -> Computer runs the main function.
// Executed line-by-line within the main function.
int main()
{
    Log("Hello World!");
    Multiply(1, 2);
    
//    cin, cout functions.
//    <<: operator = print()
//    Pushing "Hello World!" string into cout function.
//    endl is simply a endline.
    std::cout << "Hello World!" << std::endl;

//    cin.get() is a function to get an input from the command line.
//    std::cin.get();
}

// Compiler changes this text into a machine-interpreted code (executable binary).
// Compiler: cpp (as a translation unit) -> obj (an intermediate code)
// Linker: obj
