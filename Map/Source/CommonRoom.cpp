#include "CommonRoom.hpp"

std::vector<std::shared_ptr<Field>> CommonRoom::getFields() const
{
    return _fields;
}

CommonRoom::CommonRoom(const int size)
    : _fields(std::vector<std::shared_ptr<Field>>(size))
{}