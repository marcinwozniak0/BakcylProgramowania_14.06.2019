#include "MapPrinter.hpp"
#include "FightField.hpp"
#include "EmptyField.hpp"
#include "TreasureField.hpp"
#include "CommonRoom.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(MapPrinterTest, PrintStandardFieldShouldReturnDot)
{
    MapPrinter printer;
    EmptyField emptyfield;
    ASSERT_EQ('.', printer.printField(emptyfield));
}

TEST(MapPrinterTest, PrintFightFieldShouldReturnF)
{
    MapPrinter printer;
    FightField fightfield;
    ASSERT_EQ('F', printer.printField(fightfield));
}

TEST(MapPrinterTest, PrintTreasureFieldShouldReturnT)
{
     MapPrinter printer;
     TreasureField treasurefield;
     ASSERT_EQ('T', printer.printField(treasurefield));
}

TEST(MapPrinterTest, fooooo)
{
    std::vector<std::shared_ptr<Field>> fields;
    fields.push_back(std::make_shared<FightField>());
    fields.push_back(std::make_shared<EmptyField>());
    fields.push_back(std::make_shared<TreasureField>());
    fields.push_back(std::make_shared<EmptyField>());

    CommonRoom commonRoom(fields);

     MapPrinter printer;
     ASSERT_EQ("#######\n# F . #\n# T . #\n#######", printer.printRoom(commonRoom));
}