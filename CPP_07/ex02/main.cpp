#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{
    /* Test default constructor */
    std::cout << "\n=== Testing default constructor ===\n";
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    /* Test parametric constructor */
    std::cout << "\n=== Testing parametric constructor ===\n";
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];

    /* Initialize arrays with random values */
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    /* Test copy constructor and assignment operator */
    std::cout << "\n=== Testing copy constructor and assignment operator ===\n";
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    /* Verify values are preserved */
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Values don't match!" << std::endl;
            return 1;
        }
    }
    std::cout << "All values match!" << std::endl;

    /* Test exception handling */
    std::cout << "\n=== Testing exception handling ===\n";
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }

    /* Test with different types */
    std::cout << "\n=== Testing with string type ===\n";
    Array<std::string> strings(3);
    strings[0] = "hello";
    strings[1] = "fellow";
    strings[2] = "people";

    for (unsigned int i = 0; i < strings.size(); i++)
        std::cout << strings[i] << " ";
    std::cout << std::endl;

    delete[] mirror;
    return 0;
}

// 42 school test main
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }