#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <iostream>

class Smartphone
{
public:

	Smartphone(const char * mod = "", double pri = 0.0, const char * os = "")
	{
		strcpy_s(model, 20, mod);
		model[20] = '\0';
		price = pri;
		strcpy_s(OS, 20, os);
		OS[20] = '\0';
	}

	Smartphone &operator=(const Smartphone & other)
	{
		if (this != &other)
		{
			strcpy_s(model, 20, other.model);
			price = other.price;
			strcpy_s(OS, 20, other.OS);
		}
		return *this;
	}

	const char * getModel() const
	{
		return model;
	}

	void setModel(const char * mod)
	{
		strcpy_s(model, 20, mod);
		model[20] = '\0';
	}

	double getPrice() const
	{
		return price;
	}

	void setPrice(double pri)
	{
		price = pri;
	}

	const char * getOS() const
	{
		return OS;
	}

	void setOS(const char * os)
	{
		strcpy_s(OS, 20, os);
		OS[20] = '\0';
	}

private:
	char model[20];
	double price;
	char OS[20];
};

#endif
