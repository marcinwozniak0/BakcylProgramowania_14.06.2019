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
        return '0';
    }
}

std::string MapPrinter::printRoom(const Room& room)
{
    auto fields = room.getFields();
    std::string row = "";
    for(auto i = 0u; i < fields.size(); i++)
    {
        row += printField(*fields.at(i));
        if(i == std::sqrt(fields.size()))
        {
            row += "\n";
        }
    }
    return row;
}