#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers; // DECLARES A VECTOR OF INTEGERS CALLED "numbers"

    numbers.push_back(10); // ADDS THE NUMBER 10 TO THE END OF THE VECTOR
    numbers.push_back(20); // ADDS THE NUMBER 20 TO THE END OF THE VECTOR
    numbers.push_back(30); // ADDS THE NUMBER 30 TO THE END OF THE VECTOR

    cout << "The first number is: " << numbers[0] << endl;  // OUTPUTS THE FIRST ELEMENT OF THE VECTOR, WHICH IS 10
    cout << "The second number is: " << numbers[1] << endl; // OUTPUTS THE SECOND ELEMENT OF THE VECTOR, WHICH IS 20
    cout << "The third number is: " << numbers[2] << endl;  // OUTPUTS THE THIRD ELEMENT OF THE VECTOR, WHICH IS 30

    return 0;
}