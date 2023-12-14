#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    for (int i = 2; i <= 20; i++)
    {
        v.push_back(i);
    }
    bool found = false;
    int i = 21;
    while (!found)
    {
        bool good = true;
        for (auto num : v)
        {
            if (i % num != 0) good = false;
        }
        if (good)
        {
            std::cout << i << "\n";
            found = true;
        }
        ++i;
    }
    return 0;
}