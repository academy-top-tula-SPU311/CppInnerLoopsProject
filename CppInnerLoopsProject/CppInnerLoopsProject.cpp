#include <iostream>

int main()
{
    int n{ 11 };
    
    for (int i{}; i < n; i++)
    {
        for (int j{}; j < n; j++)
            if(i == j || j == n - i - 1
                || i == n / 2 || j == n / 2)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }

    
}
