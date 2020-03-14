#include <iostream>

//Class prototype
class Calculator{
public:
    Calculator();
    ~Calculator();
    double sum(double x, double y);
    double subtract(double x, double y);
    double divide(double x, double y);
    double multiply(double x, double y);
};

//Class definition
Calculator::Calculator() {}
Calculator::~Calculator() {}
double Calculator::sum(double x, double y) {
    return x+y;
}
double Calculator::subtract(double x, double y) {
    return x-y;
}
double Calculator::divide(double x, double y) {
    return x/y;
}
double Calculator::multiply(double x, double y) {
    return x*y;
}
int main(){
    Calculator cal;
    std::cout<<cal.sum(2.0, 3.0)<<std::endl;
}
