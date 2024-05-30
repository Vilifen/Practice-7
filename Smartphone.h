#pragma once
#include <string>


class Smartphone
{
private:

    std::string model, manufacturer, color, display, ram, storage, cpu, os;
    double price;

public:
    Smartphone();

    Smartphone(std::string model, double price, std::string manufacturer,
        std::string color, std::string display, std::string ram,
        std::string storage, std::string cpu, std::string os);


    std::string getModel() const;

    std::string getManufacturer() const;

    std::string getColor() const;

    std::string getDisplay() const;

    std::string getRAM() const;

    std::string getStorage() const;

    std::string getCPU() const;

    std::string getOS() const;

    double getPrice() const;

    void setPrice(double price);
};