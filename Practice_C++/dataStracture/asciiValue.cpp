#include <iostream>
#include <string>

int main() {
    // Declare an array of strings
    std::string strings[] = {"Hello", "World", "123"};

    // Iterate through each string in the array
    for (const auto& str : strings) {
        std::cout << "ASCII values of characters in string \"" << str << "\": ";
        // Iterate through each character in the string
        for (char c : str) {
            // Print the ASCII value of the character
            std::cout << static_cast<int>(c) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}