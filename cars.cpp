#include <iostream>
using namespace std;

class Car
{
private:
	string owner_first_name;
	string owner_last_name;

public:
	string brand;
	string model;
	int year;

	Car(string x, string y, int z)
	{
		brand = x;
		model = y;
		year = z;
	}

	void set_owner_first(string s)
	{
		owner_first_name = s;
	}

	string get_owner_first()
	{
		return owner_first_name;
	}

	void set_owner_last(string s)
	{
		owner_last_name = s;
	}

	string get_owner_last()
	{
		return owner_last_name;
	}

	void print_info()
	{
		cout << brand << " " << model << " " << year << "\n";
	}

	void print_owner()
	{
		cout << owner_first_name << " " << owner_last_name << "\n";
	}
};

int main()
{
	Car my_first_car("Chevy", "S10", 1996);
	Car aston_martin("Aston Martin", "AMR21", 2021);

	my_first_car.print_info();

	my_first_car.set_owner_first("Stephen");
	my_first_car.set_owner_last("Burke");

	my_first_car.print_owner();

	return 0;
}