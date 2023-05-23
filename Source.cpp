// что то 

#include <iostream>

int main()
{
	double x, y;

	std::cin >> x;
	std::cin >> y;
	if ((((x >= 0) && (y >= 0)) && (x * x + y * y >= 1)) && (x <= 1 && y <= 1))
	{
		std::cout << "входит" << std::endl;
	}
	else
	{
		std::cout << "не входит" << std::endl;
	}

	//printf("%s", ((((x >= 0) && (y >= 0)) && (x * x + y * y >= 1)) && (x <= 1 && y <= 1)) ? "входит" : "не входит");
	return 0;
}