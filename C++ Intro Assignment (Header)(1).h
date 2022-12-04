class Car {
public:
    Car(double x_, double y_, double fuelTank_, double fuelEfficiency_); // constructor
    Car(const Car & other); // copy constructor

    double getDistance(double dstX, double dstY);
    int canDrive(double dstX, double dstY);
    int moveTo(double dstX, double dstY); // m

    // basic functions
    double getX();
    double getY();
    double getFuelTank();
    double getFuelEfficiency();
    double getFuelAmount();
    void setX(double newX);
    void setY(double newY);
    void setFuelAmount(double newFuelAmount);
private:
    double x;
    double y;
    double fuelTank;
    double fuelEfficiency;
    double fuelAmount;
};

class GasStation {
public:
    GasStation(double x_, double y_, double price_);
    double getX();
    double getY();
    double getPrice();
    double setPrice(double newPrice);
private:
    double x;
    double y;
    double price;
};



