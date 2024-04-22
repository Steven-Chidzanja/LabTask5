#include <iostream>

using namespace std;

int main()
{
    int value;
    cout << "Enter number of trials n:" << endl;
    int n; // n is for the number of trials
    cin >> n;
    int i = 0;
    while(i < n)
        {
            cout << "Enter an inter value between 5 and 10" << endl;
            cin >> value;
            if(value > 5 && value < 10)
                {
                    cout << "Your input value("<<value <<") has been accepted" << endl;
                }
            else
                {
                    cout << "Sorry, you have entered an invalid number, please try again "<< endl;
                }
          i++;
          return 0;
        }

    return 0;
}
