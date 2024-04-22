//A program to find the areas of different shapes square, triangle and rectangle
#include <iostream>
using namespace std;

//A square dimension side that are equal and the area is calculated by squaring on side
void squareFunction (){
    double length, AreaOfSquare;
    cout << "Enter The Length of the square: "<< endl;
    cin >> length;
    AreaOfSquare = length * length;
    cout << "The area of the square is : "<< AreaOfSquare<< endl;
}
//using the base and the height the area of triangle is half of base times height

void triangleFunction(){
    double height,base;
    double AreaOfTriangle;
    cout << "Enter The base of the Tringle: "<< endl;
    cin >> base;
    cout << "Enter The height of the Tringle: "<< endl;
    cin >> height;
    AreaOfTriangle = 0.5 * base * height;
    cout << "The area of the triangle is" << AreaOfTriangle << endl;
}
//using the length and the width, the area of the rectangle is length by width
void rectangleFunction(){
    double length, width;
     double AreaOfRectangle;
    cout << "Enter The Length of the Rectangle: "<< endl;
    cin >> length;
    cout << "Enter The Width of the Rectangle: "<< endl;
    cin >> width;
    AreaOfRectangle = length * width;
    cout << "The area of the triangle is" << AreaOfRectangle << endl;
}
int main()
{
        do
        {
            cout << "\nSelect a shape to calculate its area:" << endl;
            cout << "1. Square" << endl;
            cout << "2. Triangle" << endl;
            cout << "3. Rectangle" << endl;
            cout << "4. Quit" << endl;

            int option;
            cout << "Enter your option (1/2/3/4): ";
            cin >> option;

            switch (option)
            {
                case 1:
                squareFunction();
                break;
                case 2:
                triangleFunction();
                break;
                case 3:
                rectangleFunction();
                break;
                case 4:
                cout << "Exiting the program"<< endl;
                default:
                cout << "An invalid option has been entered"<< endl;
                break;
            }

    }

     while(true);
      return 0;
  return 0;
}
