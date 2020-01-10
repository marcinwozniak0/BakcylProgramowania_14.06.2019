#include "MapPrinter.hpp"
#include <iostream>
#include <cmath>

char MapPrinter::printField(const Field& field)
{
    if(field.getType() == FieldType::Fight)
    {
        return 'F';
    }
    else if(field.getType() == FieldType::Treasure)
    {
        return 'T';
    }
    else
    {
        return '.';
    }
}

std::string MapPrinter::printRoom(const Room& room)
{
    auto fields = room.getFields();
    std::string result = "";
    int width = std::sqrt(fields.size());

    for(int j = 0; j < 2 * width + 3; j++)
    {
        result += "#";
    }
    result += "\n";
    result += "#";

    for(auto i = 0u; i < fields.size(); i++)
    {
        result += " ";
        result += printField(*fields.at(i));
        if(i == width - 1u)
        {
            result += " #\n#";
        }
    }

    result += " #\n";

    for(int j = 0; j < 2 * width + 3; j++)
    {
        result += "#";
    }

    return result;
}