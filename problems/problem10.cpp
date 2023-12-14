#include <cmath>
#include <iostream>

int main()
{
    long long sum = 2 + 3;
    for (int i = 5; i < 2'000'000; i += 2)
    {
        bool prime = true;
        for (int j = 3; j < sqrt(i) + 1; j += 2)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime) sum += i;
    }
    std::cout << sum << "\n";
    return 0;
}