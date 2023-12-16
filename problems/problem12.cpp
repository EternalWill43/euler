#include <iostream>

int main()
{
    int series = 1 + 2;
    for (int i = 3;; i++)
    {
        series += i;
        int divisors = 0;
        for (int j = 1; j < series / 2 + 1; j++)
        {
            if (series % j == 0) divisors++;
        }
        if (divisors >= 500)
        {
            std::cout << series << "\n";
            return 0;
        }
    }
    return 0;
}