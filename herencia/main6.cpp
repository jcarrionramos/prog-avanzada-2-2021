#include <iostream>

using namespace std;

class Rectangle {
  protected:
    int width;
    int height;
  
  public:
    Rectangle(){}
    Rectangle(int _width, int _height) {
      width = _width;
      height = _height;
    }
    
    virtual void display() {
      cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
  public:
    
    RectangleArea(){}
    RectangleArea(int _width, int _height) : Rectangle(_width, _height) {
    }
    
    void read_input() {
      cin >> width >> height;
    }
    
    void display() {
      cout << width * height << endl;
    }
};

