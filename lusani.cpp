

#include <iostream>
#include <cmath>
    using namespace std;

int main(){ 
        double distance, x1, x2, y1, y2;
        cout << "Enter value of x1" << endl;
        cin >> x1;
        cout << "Enter value of x2" << endl;
        cin >> x2;
        cout << "Enter value of y1" << endl;
        cin >> y1;
        cout << "Enter value of y2" << endl;
        cin >> y2;

        distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
        cout << "The distance between point 1 and 2 is " << distance;

        return 0;
    }





