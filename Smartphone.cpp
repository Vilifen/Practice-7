#include "Smartphone.h"

Smartphone::Smartphone()
{
	this->model = "";
	this->price = 0;
	this->manufacturer = "";
	this->color = "";
	this->display = "";
	this->ram = "";
	this->storage = "";
	this->cpu = "";
	this->os = "";
}
Smartphone::Smartphone(std::string model, double price, std::string manufacturer,
	std::string color, std::string display, std::string ram,
	std::string storage, std::string cpu, std::string os)
{
	this->model = model;
	this->price = price;
	this->manufacturer = manufacturer;
	this->color = color;
	this->display = display;
	this->ram = ram;
	this->storage = storage;
	this->cpu = cpu;
	this->os = os;
}

std::string Smartphone::getModel() const
{
	return model;
}

std::string Smartphone::getManufacturer() const
{
	return manufacturer;
}

std::string Smartphone::getColor() const
{
	return color;
}

std::string Smartphone::getDisplay() const
{
	return display;
}

std::string Smartphone::getRAM() const
{
	return ram;
}

std::string Smartphone::getStorage() const
{
	return storage;
}

std::string Smartphone::getCPU() const
{
	return cpu;
}

std::string Smartphone::getOS() const
{
	return os;
}

double Smartphone::getPrice() const
{
	return price;
}

void Smartphone::setPrice(double price)
{
	this->price = price;
}