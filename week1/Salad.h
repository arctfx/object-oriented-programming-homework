#ifndef SALAD_H
#define SALAD_H
#include <cstring>
#include "DynamicArray.h"

#define MAX_LEN 256

class Salad
{
	struct Vegetable
	{
		char name[MAX_LEN];
		double weight;

		void inputVegetable()
		{
			std::cout << "Vegetable name: ";
			std::cin.getline(name, MAX_LEN);

			std::cout << "Vegetable weight: ";
			std::cin >> weight; std::cin.ignore();
		}
	};

	struct Dressing
	{
		char name[MAX_LEN];
		char allergen[MAX_LEN];
		double quantity;

		void inputDressing()
		{
			std::cout << "Dressing name: ";
			std::cin.getline(name, MAX_LEN);

			std::cout << "Dressing quantity: ";
			std::cin >> quantity; std::cin.ignore();

			std::cout << "Allergen name: ";
			std::cin.getline(allergen, MAX_LEN);
		}
	};

public:

	void inputSalad()
	{
		std::cout << "Salad name: ";
		std::cin.getline(m_name, MAX_LEN);

		for (int i = 0; i < 3; i++)
		{
			veggies[i].inputVegetable();
		}
		dressing.inputDressing();

		std::cout << "Salad price: ";
		std::cin >> price; std::cin.ignore();
	}

	double getWeight()
	{
		double ans = 0;
		for (int i = 0; i < 3; i++)
			ans += veggies[i].weight;
		return ans;
	}

	void printAllergen()
	{
		std::cout << dressing.allergen;
	}

	void toString()
	{
		std::cout << m_name << std::endl;

		std::cout << "Contents: ";
		for (int i = 0; i < 3; i++)
			std::cout << veggies[i].name << " ";
		std::cout << dressing.name << std::endl;

		std::cout << "Price: " << price << std::endl;
		std::cout << "Weight: " << getWeight() << std::endl;
		std::cout << "Allergen: " << dressing.allergen << std::endl;
	}

private:
	char m_name[MAX_LEN];
	DynamicArray<Vegetable> veggies;
	Dressing dressing;
	double price;
};

#endif // SALAD