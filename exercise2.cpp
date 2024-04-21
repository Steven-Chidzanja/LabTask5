#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rand;
    mt19937 gen(rand());

    uniform_int_distribution<>dis(0, 11);
    int daysUntilExpiration = dis(gen);

    //The generated number displaying
    cout << "The random numbers between 0 and 11 is: " << daysUntilExpiration << endl;
    
    switch(daysUntilExpiration)
    {
        case 0:
        cout << "Your subscription will expire soon. Renew now!"<< endl;
        break;

        case 1:
        cout << "Your subscription expires in " << daysUntilExpiration << "\n Renew now and save 10%!" << endl;
        break;

        case 3:
        cout << "Your subscription has expired." << endl;
        break;

        default:
        cout << "You have an active subscription." << endl;
    }

    return 0;
}