#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile("log.txt");
    outfile << "1 + 1" <<std::endl;
    std::cout << "1 + 1" << std::endl;
    if (outfile.is_open() == false)
    {
        std::cerr << "File not open" << std::endl;
    }
}