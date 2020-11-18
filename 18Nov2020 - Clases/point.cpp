#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
        double x {0.0};
        double y {0.0};
    public:
        Point() = default;
        Point(double x,double y){
            this->x = x;
            this->y = y;   
        }

        double getX(){return x;}
        double getY(){return y;}

        void setX(double x){this->x = x;}
        void setY(double y){this->y = y;}

        double distance(Point p){
            return sqrt(pow(p.getX() - x,2) + pow(p.getY() - y,2));
        }
}; //Clase Point

int main()
{
    Point p1;
    cout << "Punto 1" << endl;
    cout << "(" << p1.getX() << ",";
    cout << p1.getY() << ")\n";

    Point p2 {5,8};
    cout << "\nPunto 2" << endl;
    cout << "(" << p2.getX() << ",";
    cout << p2.getY() << ")\n";

    p1.setX(10);
    p2.setY(13);

    cout << "\nPunto 1" << endl;
    cout << "(" << p1.getX() << ",";
    cout << p1.getY() << ")\n";

    cout << "\nPunto 2" << endl;
    cout << "(" << p2.getX() << ",";
    cout << p2.getY() << ")\n";

    cout << "Distancia entre p1 y p2 es " << p1.distance(p2) << endl;
    return 0;
}
