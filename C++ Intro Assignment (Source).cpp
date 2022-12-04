#include "C++ Intro Assignment (Header)(1).h"
#include <cmath>
#include <iostream>

Car::Car(double x_, double y_, double fuelTank_, double fuelEfficiency_){
    x = x_;
    y = y_;
    fuelTank = fuelTank_;
    fuelEfficiency = fuelEfficiency_;
    fuelAmount = fuelTank_; // fuel tank starts full
}
Car::Car(const Car & other) {
    x = other.getX();
    y = other.getY();
    fuelTank = other.getFuelTank();
    fuelEfficiency = other.getFuelEfficiency();
    fuelAmount = other.getFuelAmount();
}

double Car::getX(){
    return x;
}
double Car::getY(){
    return y;
}
double Car::getFuelTank(){
    return fuelTank;
}
double Car::getFuelEfficiency(){
    return fuelEfficiency;
}
double Car::getFuelAmount(){
    return fuelAmount;
}
void Car::setX(double newX){
    x = newX;
    return;
}
void Car::setY(double newY){
    y = newY;
    return;
}
void Car::setFuelAmount(double newFuelAmount){
    fuelAmount = newFuelAmount;
    return;
}

double Car::getDistance(double dstX, double dstY) {
    return sqrt((getX() - dstX)*(getX() - dstX) + (getY() - dstY)*(getY() - dstY));
}
double Car::fuelAfterDrive(double dstX, double dstY) {
    double distanceToMove = distance(this, lx, ly);
    double carRange = getFuelEfficiency()*getFuelAmount();
    return distanceToMove <= carRange ? carRange - distanceToMove : 0;
}

int Car::moveTo(double dstX, double dstY){
    FAD = fuelAfterDrive();
    if(FAD != 0){
        setFuelAmount(FAD);
        setX(dstX);
        setY(dstY);
        return 1;
    }
    return 0;
}

Car * copyIfPossible(Car[] carArray, int carLength, double dstX, double dsyY) {
    int copyLength = 0;
    for(int i = 0; i < carLength; i++) {
        if (Car[i]->getDistance(dstX, dstY) < ;
    }
}




GasStation::GasStation(double x_, double y_, double price_){
    x = x_;
    y = y_;
    price = price_;
}
double GasStation::getX(){
    return x;
}
double GasStation::getY(){
    return y;
}
double GasStation::getPrice(){
    return price;
}
void GasStation::setPrice(double newPrice) {
    price = newPrice;
    return;
}



int main() {
    car = new Car(1, 2, 40, 20);
    cout << car.getX();
    return 0;
}