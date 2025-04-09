#include <iostream>
using namespace std;

int main()
{
    double earth_weight;
    int planet;

    cout << "Enter your weight on Earth \n";
    cin >> earth_weight;

    cout << "Select a planet (1-7) to fight on: \n";
    cout << "1 Mercury\n"
         << "2 Venus\n"
         << "3 Mars\n"
         << "4 Jupiter\n"
         << "5 Saturn\n"
         << "6 Uranus\n"
         << "7 Neptune\n";
    cin >> planet;

    switch (planet)
    {
    case 1:
        cout << "Your weight on Mercury is: " << earth_weight * 0.38 << endl;
        break;
    case 2:
        cout << "Your weight on Venus is: " << earth_weight * 0.91 << endl;
        break;
    case 3:
        cout << "Your weight on Mars is: " << earth_weight * 0.38 << endl;
        break;
    case 4:
        cout << "Your weight on Jupiter is: " << earth_weight * 2.34 << endl;
        break;
    case 5:
        cout << "Your weight on Saturn is: " << earth_weight * 1.06 << endl;
        break;
    case 6:
        cout << "Your weight on Uranus is: " << earth_weight * 0.92 << endl;
        break;
    case 7:
        cout << "Your weight on Neptune is: " << earth_weight * 1.19 << endl;
        break;
    default:
        cout << "Invalid planet selection. Please select a number between 1 and 7." << endl;
        break;
    }
    return 0;
}