#include "CommonRoom.hpp"

std::vector<std::shared_ptr<Field>> CommonRoom::getFields() const
{
    return _fields;
}

CommonRoom::CommonRoom(std::vector<std::shared_ptr<Field>>& fields)
    : _fields(fields)
{}