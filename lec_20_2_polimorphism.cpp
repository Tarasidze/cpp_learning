#include <iostream>
#include <vector>


struct Shape {
    virtual double area() const = 0;
    virtual ~Shape() = default;
    virtual void f(int x) const {
        std::cout << x << "\n";
    }
};

double Shape::area() const {
    return 99.99;
}

struct Square: Shape {
    double a;
    Square(double a): a(a) {}
    double area() const override {
        return a * a;
    }
};

struct Circle: Shape {
    double r;
    Circle(double r): r(r) {}
    double area() const override {
        return 3.14 * r * r;
    }
};


int main () {

    Circle c(3.0);
    c.Shape::f(7);
    std::cout << c.Shape::area() << "\n";

    std::vector<Shape*> v;
    v.push_back(new Square(2.0));
    v.push_back(new Circle(1.0));

    for (Shape* s: v) {
        std::cout << s->area() << "\n";
    }
}