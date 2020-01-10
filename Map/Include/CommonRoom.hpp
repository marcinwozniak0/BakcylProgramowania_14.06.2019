#pragma once
#include "Room.hpp"

class CommonRoom :public Room
{
public:
    std::vector<std::shared_ptr<Field>> getFields() const;
    CommonRoom(std::vector<std::shared_ptr<Field>>&);
private:
    std::vector<std::shared_ptr<Field>> _fields;
};