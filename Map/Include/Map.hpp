#pragma once
#include "Field.hpp"
#include <memory>
#include <vector>

using FieldList = std::vector<std::vector<std::unique_ptr<Field>>>;

class Map
{
public:
    virtual const FieldList& getFields() = 0;

    virtual char printField(const Field& field) = 0;
};
