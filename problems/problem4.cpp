#include <iostream>

bool is_palendromic(int num)
{
    int reversed = 0;
    int original = num;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed == original;
}

int main()
{
    int largest = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            if (is_palendromic(i * j) && (i * j) > largest) largest = i * j;
        }
    }
    std::cout << largest << "\n";
    return 0;
}