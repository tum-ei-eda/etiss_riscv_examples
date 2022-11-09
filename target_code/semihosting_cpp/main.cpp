#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Hello from cpp\n";

    {
        std::ofstream file("test_file.txt");
        for (size_t i = 0; i < 100000; i++)
            file << i << "\n";
    }

    {
        std::ifstream file("test_file.txt");
        std::string buffer;
        std::cout << file.rdbuf();
    }

    return 0;
}
