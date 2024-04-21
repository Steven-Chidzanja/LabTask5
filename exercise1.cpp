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

    //Output if the user's subscription expires in 10 days
    if (daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon. Renew now!"<< endl;
    }
    else if (daysUntilExpiration <= 5)
    {
        cout << "Your subscription expires in " << daysUntilExpiration << "\n Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiration = 0)
    {
        cout << "Your subscription has expired." << endl;
    }
    else
    {
        cout << "You have an active subscription." << endl;
    }
    
    return 0;
}