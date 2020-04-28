#include "gtest/gtest.h"
#include "Unit.h"
#include "Unit.cpp"
#include "CreateArmy.h"
#include "CreateArmy.cpp"
#include "Army.h"
#include "Army.cpp"
#include "Game.h"
#include "Game.cpp"

TEST(test1, testing_fr_cavalry)
{
    ArmyFrFactory factory;
    Cavalry* cav = factory.create_cavalry();
    EXPECT_EQ(cav->get_health(), 200);
    EXPECT_EQ(cav->get_power(), 200);
    EXPECT_EQ(cav->get_cost(), 20);
    delete cav;
}

TEST(test2, testing_fr_archer)
{
    ArmyFrFactory factory;
    Archer* arc = factory.create_archer();
    EXPECT_EQ(arc->get_health(), 100);
    EXPECT_EQ(arc->get_power(), 200);
    EXPECT_EQ(arc->get_cost(), 20);
    delete arc;
}

TEST(test3, testing_fr_infantry)
{
    ArmyFrFactory factory;
    Infantry* inf = factory.create_infantry();
    EXPECT_EQ(inf->get_health(), 100);
    EXPECT_EQ(inf->get_power(), 100);
    EXPECT_EQ(inf->get_cost(), 10);
    delete inf;
}

TEST(test4, testing_eng_cavalry)
{
    ArmyEngFactory factory;
    Cavalry* cav = factory.create_cavalry();
    EXPECT_EQ(cav->get_health(), 200);
    EXPECT_EQ(cav->get_power(), 150);
    EXPECT_EQ(cav->get_cost(), 20);
    delete cav;
}

TEST(test5, testing_eng_archer)
{
    ArmyFrFactory factory;
    Archer* arc = factory.create_archer();
    EXPECT_EQ(arc->get_health(), 100);
    EXPECT_EQ(arc->get_power(), 250);
    EXPECT_EQ(arc->get_cost(), 20);
    delete arc;
}

TEST(test6, testing_eng_infantry)
{
    ArmyEngFactory factory;
    Infantry* inf = factory.create_infantry();
    EXPECT_EQ(inf->get_health(), 100);
    EXPECT_EQ(inf->get_power(), 100);
    EXPECT_EQ(inf->get_cost(), 20);
    delete inf;
}