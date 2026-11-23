#include <iostream>
#include "Serializer.hpp"

int main()
{
    Data data;
    Data *back;
    uintptr_t raw;

    data.id = 42;
    data.name = "Malsha";
    data.value = 4.2;

    raw = Serializer::serialize(&data);
    back = Serializer::deserialize(raw);

    std::cout << "original: " << &data << std::endl;
    std::cout << "raw: " << raw << std::endl;
    std::cout << "returned: " << back << std::endl;
    if (back == &data)
        std::cout << "OK: pointers are equal" << std::endl;
    else
        std::cout << "KO: pointers differ" << std::endl;
    std::cout << back->id << " " << back->name << " " << back->value << std::endl;
    return 0;
}