#include <cmath>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> primes = {2, 3};
    int i = 5;
    while (i < sqrt(600851475143) + 1)
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
        if (prime) primes.push_back(i);
        i += 2;
    }
    int n = primes.size() - 1;
    for (; n >= 0; n--)
    {
        if (600851475143 % primes[n] == 0)
        {
            std::cout << primes[n] << "\n";
            break;
        }
    }
    return 0;
}
