#include "Catalog.h"


void Catalog::addSmartphone(std::string model, double price, std::string manufacturer,
    std::string color, std::string display, std::string ram,
    std::string storage, std::string cpu, std::string os)
{
    smartphones.push_back(Smartphone{ model, price, manufacturer,
      color, display, ram,
      storage, cpu, os });
}

Smartphone Catalog::getSmartphone(std::string model)
{
    for (Smartphone s : smartphones)
    {
        if (s.getModel() == model)
            return s;
    } 
    return Smartphone();
}

Smartphone Catalog::search(const Smartphone& searchSmartphone)
{
    for (Smartphone s : smartphones)
    {
        std::string model = searchSmartphone.getModel();

        if (!model.empty() && model != s.getModel())
            continue;

        std::string manufacturer = searchSmartphone.getManufacturer();

        if (!manufacturer.empty() && manufacturer != s.getManufacturer())
            continue;

        std::string color = searchSmartphone.getColor();

        if (!color.empty() && color != s.getColor())
            continue;

        std::string display = searchSmartphone.getDisplay();

        if (!display.empty() && display != s.getDisplay())
            continue;

        std::string ram = searchSmartphone.getRAM();

        if (!ram.empty() && ram != s.getRAM())
            continue;

        std::string storage = searchSmartphone.getStorage();

        if (!storage.empty() && storage != s.getStorage())
            continue;

        std::string cpu = searchSmartphone.getCPU();

        if (!cpu.empty() && cpu != s.getCPU())
            continue;

        std::string os = searchSmartphone.getOS();

        if (!os.empty() && os != s.getOS())
            continue;

        return s;
    }
    return Smartphone();
}