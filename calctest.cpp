// to debug
// PS C:\Users\Admin\Desktop\New folder>  g++ .\Calc.cpp .\Calctest.cpp -lgtest -lgtest_main -pthread -o main.exe
// PS C:\Users\Admin\Desktop\New folder> .\main.exe
#include <iostream>
using namespace std;
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#ifndef _CALC_H
#define _CALC_H

int sum(int x, int y);
int sub(int x, int y);
#endif

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
    cout << "b7bk ya Sala ";
    return RUN_ALL_TESTS();
}