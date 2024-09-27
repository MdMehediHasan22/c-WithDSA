#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
private:
    double length, width;

public:
    void initialize(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    void displayDimensions()
    {
        cout << "length" << length << "width" << width << endl;
    }
    void displayArea()
    {
        double area = length * width;
        cout << "Area of the rectangle : " << area << endl;
    }
    double getDiagonal() const
    {
        return sqrt(length * length + width * width);
    }
};
int main()
{
    Rectangle rect;
    double l, w;
    cout << "Enter length of Rectangle :" << endl;
    cin >> l;
    cout << "Enter width of Rectangle :" << endl;
    cin >> w;
    rect.initialize(l, w);
    cout << "Dimensions of the rectangle :" << endl;
    rect.displayDimensions();
    cout << "Display the area :" << endl;
    rect.displayArea();
    cout<<"Diagonal :"<<rect.getDiagonal()<<endl;

    return 0;
}