#include <iostream>
using namespace std;
 
class Box {
  public:
     double getVolume(void) {
        return length * breadth * height;
     }
     void setLength( double len ) {
        length = len;
     }
     void setBreadth( double bre ) {
        breadth = bre;
     }
     void setHeight( double hei ) {
        height = hei;
     }
     
     Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
     }
     
  private:
     double length;      // Length of a box
     double breadth;     // Breadth of a box
     double height;      // Height of a box
};
 
int main() {
  Box Box1;                // Declare Box1 of type Box
  Box Box2;                // Declare Box2 of type Box
  Box Box3;                // Declare Box3 of type Box
  double volume = 0.0;     // Store the volume of a box here
 
  Box1.setLength(6.0);
  Box1.setBreadth(7.0);
  Box1.setHeight(5.0);
  Box2.setLength(12.0);
  Box2.setBreadth(13.0);
  Box2.setHeight(10.0);
  volume = Box1.getVolume();
  cout << "Volume of Box1 : " << volume <<endl;
  volume = Box2.getVolume();
  cout << "Volume of Box2 : " << volume <<endl;
  Box3 = Box1 + Box2;
  volume = Box3.getVolume();
  cout << "Volume of Box3 : " << volume <<endl;
  system("pause");
}
 