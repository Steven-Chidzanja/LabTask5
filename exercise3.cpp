#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 8;
    string element[n] = {"B123", "C234", "A345", "C15",
                        "B177", "G3003", "C235", "B179"};

    cout << "Elements \n"<<endl;
    for(int i = 0; i < n-1; i++)
    {
            if(element[i][0] == 'B')
            {
                cout << element[i]<< endl;
            }
    }
    
    return 0;
}
