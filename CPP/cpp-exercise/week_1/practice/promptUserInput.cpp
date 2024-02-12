# include <iostream>

// What does using namespace std do?
// It allows you to use cout and endl without having to type std::cout and std::endl
using namespace std;

/* 
Write a C++ program to take two integer inputs from user and print sum and product of them. 
*/

int main() 
{
    int x;
    int y;

    cout << "Prompt user for input x: ";
    cin >> x;

    cout << "Prompt user for input y: ";
    cin >> y;

    cout << x+y << endl;
    return 0;
}