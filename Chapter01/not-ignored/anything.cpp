#include <iostream>
#include <cstdlib>

int main() {
    // Print out system details
    std::cout << "Operating System: " << std::getenv("OS") << std::endl;
    std::cout << "Processor Architecture: " << std::getenv("PROCESSOR_ARCHITECTURE") << std::endl;
    std::cout << "Number of Processors: " << std::getenv("NUMBER_OF_PROCESSORS") << std::endl;
    std::cout << "System Directory: " << std::getenv("SystemRoot") << std::endl;

    return 0;