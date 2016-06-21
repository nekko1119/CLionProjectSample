#include <Calculator.h>
#include <stdexcept>

namespace calc
{
    int add(int left, int right)
    {
        return left + right;
    }

    double divide(int left, int right)
    {
        if (right == 0) {
            throw std::invalid_argument{"can not divide by 0"};
        }
        return left / static_cast<double>(right);
    }
}