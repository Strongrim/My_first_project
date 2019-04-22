#include <iostream>


int Myfn(int Number, int Power);

int main( )
{
	int Number, Power , Velue;
	std::cout << " Enter a number " << std::endl;
	std::cin >> Number;
	std::cout << " Enter a power " << std::endl;
	std::cin >> Power;

	Velue = Myfn(Number, Power);
	std::cout << " Number " << Number << " to the " << Power << " power " << " = " << Velue << std::endl;
	
	system("pause");
	return 0;
}

int Myfn (int Number, int Power)
{
	if (Power < 2)
		return (Number);
	else
		return (Number * Myfn( Number, (Power - 1)));
}
