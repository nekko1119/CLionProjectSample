#include <Calculator.h>
#include <gtest/gtest.h>

TEST(Calculator, add)
{
    using calc::add;
    auto const result = add(1, 2);
    EXPECT_EQ(3, result);
}

TEST(Calculator, divide)
{
    using calc::divide;
    auto const result = divide(3, 2);
    EXPECT_DOUBLE_EQ(1.5, result);
}

TEST(Calculator, divide_by_zero)
{
    using calc::divide;
    EXPECT_THROW(divide(1, 0), std::invalid_argument);
}
