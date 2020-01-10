#pragma once
#include "Field.hpp"
#include "Room.hpp"
#include <string>

class MapPrinter
{
public:
    char printField(const Field& field);
    std::string printRoom(const Room& room);
};
