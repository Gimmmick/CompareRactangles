/******************************************************************************
The program compares 2 rectangles and determines which rectangle's area is
greater (or if they are the same) according to a user's unput data.

@version 10/18/2020
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double rect_1_length, rect_1_width;
    
    cout << "Enter length and width of the first rectangle.\n";
    cout << "Length: ";
    cin >> rect_1_length;
    cout << "Width: ";
    cin >> rect_1_width;
    
    // input validation
    if ((rect_1_length <= 0) || (rect_1_width <= 0)) {
        cout << "The values of length and width have to be positive numbers!";
        return 0;
    }
    
    double rect_2_length, rect_2_width;
    
    cout << "\nEnter length and width of the second rectangle.\n";
    cout << "Length: ";
    cin >> rect_2_length;
    cout << "Width: ";
    cin >> rect_2_width;
    
    // input validation
    if ((rect_2_length <= 0) || (rect_2_width <= 0)) {
        cout << "The values of length and width have to be positive numbers!";
        return 0;
    }
    
    double rect_1_area = rect_1_length * rect_1_width;
    double rect_2_area = rect_2_length * rect_2_width;
    
    cout << "\nThe area of the first rectangle is " << rect_1_area << endl;
    cout << "The area of the second rectangle is " << rect_2_area << endl;
    
    if (rect_1_area > rect_2_area)
        cout << "The first rectangle has a greater area.\n";
    else if (rect_1_area < rect_2_area)
        cout << "The second rectangle has a greater area.\n";
    else
        cout << "The rectangles have the same area.\n";
        
    return 0;
}
