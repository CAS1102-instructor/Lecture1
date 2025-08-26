#include <iostream>

void Log(const char* message)
{
    std::cout.print(message).print(std::endl);
}

int Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}
