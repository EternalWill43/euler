#include <iostream>

int main()
{
    int total = 2;
    int first = 1;
    int second = 2;
    while (first <= 4'000'000)
    {
        int temp = first + second;
        first = second;
        second = temp;
        if (temp % 2 == 0) total += temp;
    }
    std::cout << total << "\n";
    return 0;
}
