//program for finding hypotenuse from two sides

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    //initialize variables
    
    double first;
    double second;
    double hyp;
    
    //gathering inputs
    
    cout << "Enter first triangle side: ";
    cin >> first;
    cout << "Enter second triangle side: ";
    cin >> second;
    
    //calculate with inputs
    
    hyp = sqrt((pow(first, 2)) + (pow(second, 2)));
    
    //output results with precision
    
    cout << fixed << setprecision(2);
    cout << "Hypotenuse: " << hyp << endl;
    return 0;
}
