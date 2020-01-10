#pragma once
#include "Room.hpp"

class CommonRoom :public Room
{
public:
    std::vector<std::shared_ptr<Field>> getFields() const;
    CommonRoom(const int size);
private:
    std::vector<std::shared_ptr<Field>> _fields;
};