#include <iostream>
#include <cstring>

int main() {
    char buffer[10];
    char* input = "This string is way too long for the buffer";

    // Codacy will find a "Buffer Overflow" issue here (Security Issue)
    strcpy(buffer, input); 

    std::cout << "Buffer content: " << buffer << std::endl;
    return 0;
}
