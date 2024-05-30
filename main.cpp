#include "Smartphone.h"
#include "Catalog.h"
#include <iostream>


Catalog InitializeCatalog()
{
    Catalog catalog;

    catalog.addSmartphone("iPhone 12 Pro", 100, "Apple", "White",
        "6", "3", "64", "Apple", "iOS");

    return catalog;
}




int main(int argc, char* argv[])
{
    Catalog catalog = InitializeCatalog();

    Smartphone whatBuyerLikes{ "iPhone 12 Pro", 100, "Apple", "White",
        "6", "3", "64", "Apple", "iOS" };

    Smartphone smartphone = catalog.search(whatBuyerLikes);

    if (smartphone.getModel() != "")
    {
        std::cout << "You might like this: ";
        std::cout << smartphone.getManufacturer() << " ";
        std::cout << smartphone.getModel() << std::endl;
        std::cout << "Price: " << smartphone.getPrice() << std::endl;
        std::cout << "Color: " << smartphone.getColor() << std::endl;
        std::cout << "Display: " << smartphone.getDisplay() << std::endl;
        std::cout << "OS: " << smartphone.getOS() << std::endl;
        std::cout << smartphone.getRAM() << "Gb RAM, " << smartphone.getStorage() << " GB storage" << std::endl;
        std::cout << "CPU: " << smartphone.getCPU() << std::endl;
    }
    else
        std::cout << "Sorry, we have nothing for you.";

    return 0;
}