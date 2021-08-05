#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{
    // Seed random number generator
    unsigned seed = time(0);
    srand(seed);

    int card1 = rand() % 11 + 1;
    int card2 = rand() % 11 + 1;
    int card3 = rand() % 11 + 1;
    int total = card1 + card2;
    char input;

    std::cout << "Welcome to CONSOLE BLACKJACK!\n" << std::endl;

    std::cout << "Your cards: " << card1 << ", " << card2 << std::endl;
    std::cout << "Current total: " << total << std::endl;

    while (total < 22)
    {
        if (total < 21)
        {
            std::cout << "\nWould you like another card? (y/n): ";
            std::cin >> input;

            if (input == 'y')
            {
                std::cout << "New card: " << card3 << std::endl;
                total = total + card3;
                std::cout << "Current total: " << total << std::endl;
                card3 = rand() % 11 + 1;
            }
        }
        else if (total == 21)
        {
            std::cout << "Blackjack!" << std::endl;
            return 0;
        }
    }
    std::cout << "\nGAME OVER, you have gone Bust!" << std::endl;

    system("pause");

    return 0;
}