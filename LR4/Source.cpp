#include <iostream>
#include "Header.h"

using namespace std;


int main()
{
	double maxinarr;
	int morec;
	int pmaxinarr;
	double mult;
	double c;
	int i = 0;
	double x;
	int l;
	l = check_int("Введите размер массива(0-30)\n");
	const int larr = 30;
	double arr[larr];
	double arr2[larr];
	cout << "Введите " << l << " чисел(а/о/ )" << endl;
	while (i++ < l) {
		x = check_d("");
		arr[i - 1] = x;
	}
	i = 0;
	cout << "это ваш массив:" << endl;
	while (i++ < l) cout << arr[i - 1] << " ";
	c = check_d("\nвведите число для сравнения\n");
	morec = fmorec(arr, l, c);
	maxinarr = fmaxinarr(arr, l);
	mult = fmult(arr, l);
	pmaxinarr = fpmaxinarr(arr, l);
	my_sort(arr, l, arr2);
	cout << "\nчисла большие " << c << ":\n" << morec << endl;
	cout << "наибольшее число -  " << maxinarr << endl;
	//cout << pmaxinarr<< "     " << l << endl;
	if (pmaxinarr == l - 1)  cout << "наибольшее число последнее, произведения после него не существует" << endl;
	else  cout << "произведение чисел после наибольшего =  " << mult << endl;
	cout << "отсортированный масив:" << endl;
	i = 0;
	while (i++ < l) cout << arr2[i - 1] << " ";
	return 0;
}