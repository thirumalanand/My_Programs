#include <iostream>
using namespace std;

// declare a class
class Wall 
{
   public:


    double length;
    double height;
// parameterized constructor
    Wall(double len, double hgt) 
    {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea() 
    {
        return length * height;
    }
};

int main() {

    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // print area of wall1
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;

    // copy contents of wall1 to another object wall2
    Wall wall2 = wall1;

    // print area of wall2
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}