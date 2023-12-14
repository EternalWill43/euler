#include <iostream>

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            int k = 1000 - i - j;
            if ((i * i) + (j * j) == (k * k))
                std::cout << i << " " << j << " " << k << " " << i * j * k
                          << " " << (i * i) << " * " << (j * j) << " = "
                          << (k * k) << "\n";
        }
    }
    return 0;
}