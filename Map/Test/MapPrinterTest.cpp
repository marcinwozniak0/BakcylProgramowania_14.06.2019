#include "MapPrinter.hpp"
#include "FightField.hpp"
#include "EmptyField.hpp"
#include "TreasureField.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(MapPrinterTest, PrintStandardFieldShouldReturnZero)
{
    MapPrinter printer;
    EmptyField emptyfield;
    ASSERT_EQ('0', printer.printField(emptyfield));
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