#include <iostream>
using namespace std;

void ft_to_m() {
    double feet, meters;

    cout << "Enter length in feet: ";
    cin >> feet;

    meters = feet * 0.3048; // 1 foot = 0.3048 meters

    cout << feet << " feet is equal to " << meters << " meters" << endl;
    return ; 
}

void nmi_to_km() {
    double nmi;
    double km;
  
    cout << "Enter nautical miles (nmi): ";
    cin >> nmi;

    km = 1.852 * nmi; // 1 nautical mile = 1.852 kilometers

    cout << nmi << " nautical miles is equal to " << km << " km\n";
    return ;
}

int main() {
    ft_to_m();
    nmi_to_km();

    return 0;
}
