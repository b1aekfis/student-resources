in object-oriented programming: a Class is a user-defined object (data) type (blueprint).

trong lập trình hướng đối tượng: lớp là một "kiểu đối tượng" (kiểu dữ liệu) do người dùng định nghĩa (bản thiết kế một kiểu đối tượng).

# constructor

constructor (ctor): constructor in a Class (or Struct) is a special type of function (member, void type) whose name is same as the class name, called to new (initalizing) an object.

# classes and uniform initialization

```c++
// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { radius = r; }
    double circum() {return 2*radius*3.14159265;}
};

int main () {
  Circle foo (10.0);   // functional form
  Circle bar = 20.0;   // assignment init.
  Circle baz {30.0};   // uniform init.
  Circle qux = {40.0}; // POD-like

  cout << "foo's circumference: " << foo.circum() << '\n';
  return 0;
}
```
# access specifiers

# 
```c++
// MyCLass::~MyClass() {
//
// }

```