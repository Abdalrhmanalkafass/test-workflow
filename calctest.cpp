// to debug
// PS C:\Users\Admin\Desktop\New folder>  g++ .\Calc.cpp .\Calctest.cpp -lgtest -lgtest_main -pthread -o main.exe
// PS C:\Users\Admin\Desktop\New folder> .\main.exe
#include <iostream>
using namespace std;
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calc.hpp"
TEST(SumFunction, Test_1)
{
    EXPECT_EQ(5, sum(2, 3));
}
TEST(SumFunction, Test_2)
{
    EXPECT_NE(5, sum(12, 3));
}

TEST(SubFunction, Test_1)
{
    EXPECT_EQ(-1, sub(2, 3));
}
TEST(SubFunction, Test_2)
{
    EXPECT_NE(8, sum(12, 3));
}
int main()
{
    ::testing::InitGoogleTest();
    cout << "b7bk ya fra5555wlA";

    return RUN_ALL_TESTS();
}