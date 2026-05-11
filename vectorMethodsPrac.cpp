#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_VALS = 4;
    vector<int> courseGrades(NUM_VALS);
    int i;

    for (i = 0; i < courseGrades.size(); ++i)
    {
        cin >> courseGrades.at(i);
    }

    courseGrades.at(0) = 95; // CHANGES THE FIRST ELEMENT OF THE VECTOR TO 95
    courseGrades.at(1) = 85; // CHANGES THE SECOND ELEMENT OF THE VECTOR TO 85
    courseGrades.at(2) = 75; // CHANGES THE THIRD ELEMENT OF THE VECTOR TO 75
    courseGrades.at(3) = 65; // CHANGES THE FOURTH ELEMENT OF THE VECTOR TO 65

    cout << courseGrades.at(0) << " " << courseGrades.at(1) << " " << courseGrades.at(2) << " " << courseGrades.at(3) << endl;

    return 0;
}