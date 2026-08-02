#include <iostream>
#include <type_traits>

using namespace std;

int main() {
    // 1. Size Verification
    // A pointer is 4 or 8 bytes. This prints 6 because it is a 6-byte array.
    std::cout << "Size of literal: " << sizeof("Hello") << " bytes\n"; 

    // 2. Type Verification
    // This checks if the literal matches an array type. It prints 1 (true).
    std::cout << "Is it an array? " << std::is_array_v<decltype("Hello")> << "\n";

    // 3. Capturing the Raw Array by Reference
    // You must use a reference (&) to stop the decay.
    const char (&rawArray)[6] = "Hello"; 

    // 4. Printing the raw individual elements
    for(int i = 0; i < 6; ++i) {
        std::cout << "Element [" << i << "]: '" << rawArray[i] << "'\n";
    }

    return 0;
}
