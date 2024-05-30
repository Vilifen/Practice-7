#pragma once
#include <string>
#include <vector>
#include "Smartphone.h"

class Catalog
{
private:

    std::vector<Smartphone> smartphones;

public:

    void addSmartphone(std::string model, double price, std::string manufacturer,
        std::string color, std::string display, std::string ram,
        std::string storage, std::string cpu, std::string os);

    Smartphone getSmartphone(std::string model);

    Smartphone search(const Smartphone& searchSmartphone);
};