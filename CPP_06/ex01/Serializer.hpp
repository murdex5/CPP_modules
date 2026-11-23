
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);

private:
    // nmon of these should be called cause they are private.. hit the road dude
    Serializer();
    Serializer(const Serializer &other);
    Serializer &operator=(const Serializer &other);
    ~Serializer();
};

#endif
