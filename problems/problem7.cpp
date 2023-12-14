#include <cmath>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> primes = {2, 3, 5};
    for (int i = primes.back() + 2; primes.size() <= 10001; i += 2)
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
    }
    std::cout << primes[10000] << "\n";
    return 0;
}