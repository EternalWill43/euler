#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int check_directions(std::vector<std::vector<int>> &grid, int i, int j)
{
    int largest = 0;
    int temp = 1;
    if (i < 17)
    {
        for (int k = 0; k < 4; k++)
        {
            temp *= grid[i + k][j];
        }
        if (temp > largest) largest = temp;
    }
    temp = 1;
    if (j < 17)
    {
        for (int k = 0; k < 4; k++)
        {
            temp *= grid[i][j + k];
        }
        if (temp > largest) largest = temp;
    }
    temp = 1;
    if (i < 17 && j < 17)
    {
        for (int k = 0; k < 4; k++)
        {
            temp *= grid[i + k][j + k];
        }
        if (temp > largest) largest = temp;
    }
    temp = 1;
    if (i < 17 && j > 2)
    {
        for (int k = 0; k < 4; k++)
        {
            temp *= grid[i + k][j - k];
        }
        if (temp > largest) largest = temp;
    }
    return largest;
}

int main()
{
    std::ifstream file("./problem11.txt");
    std::string s;
    std::vector<std::vector<int>> grid(20, std::vector<int>(20));
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            file >> s;
            grid[i][j] = std::stoi(s);
        }
    }
    int largest = 0;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            int temp = check_directions(grid, i, j);
            if (temp > largest) largest = temp;
        }
    }
    std::cout << largest << "\n";
}