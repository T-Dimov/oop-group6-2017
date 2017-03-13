#ifndef CLOTHING_H
#define CLOTHING_H

#include <iostream>

class Clothing
{
public:
	Clothing(const char * tp = "", const char * cl = "", double pr = 0.0, int sz = 0)
	{
		strcpy_s(type, 31, tp);
		strcpy_s(colour, 31, cl);
		price = pr;
		size = sz;
	}

	Clothing(const Clothing &other)
	{
		strcpy_s(type, 31, other.type);
		strcpy_s(colour, 31, other.colour);
		price = other.price;
		size = other.size;
	}

	Clothing & operator=(const Clothing &other)
	{
		if (this != &other)
		{
			strcpy_s(type, 31, other.type);
			strcpy_s(colour, 31, other.colour);
			price = other.price;
			size = other.size;
		}
		return *this;
	}

	const char * getType() const
	{
		return type;
	}

	const char * getColour() const
	{
		return colour;
	}

	double getPrice() const
	{
		return price;
	}

	double getSize() const
	{
		return size;
	}

	void print() const
	{
		std::cout << "Type: " << type << std::endl << "Colour: " << colour << std::endl << "Price: " << price << std::endl << "Size: " << size;
	}

private:
	char type[31];
	char colour[11];
	double price;
	int size;
};

#endif
