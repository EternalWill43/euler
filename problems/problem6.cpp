#include <iostream>

int main()
{
    int sum_of_squares{}, square_of_sums{};
    for (int i = 1; i <= 100; i++)
    {
        sum_of_squares += i * i;
        square_of_sums += i;
    }
    std::cout << (square_of_sums * square_of_sums) - sum_of_squares << "\n";
    return 0;
}