#include "Header.h"
#include <iostream>
using namespace std;

int check_int(const char* s)
{
	int x;
	cout << s;
	cin >> x;
	while ((cin.fail() || cin.rdbuf()->in_avail() > 1) || x<=0 || x >30)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "!!!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!\n";
		cin >> x;
	}
	return x;
}

double check_d(const char* s)
{
	double x;
	cout << s;
	cin >> x;
	while (cin.fail() || cin.rdbuf()->in_avail() > 1)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "!!!!!!!!!!!!!!!!ERROR!!!!!!!!!!!!!!\n";
		cin >> x;
	}
	return x;
}



int fmorec(double* arr, int l, double c)
{
	int morec = 0;
	int i = 0;
	while (i++ < l) {
		if (abs(arr[i - 1] - c) != DBL_EPSILON && arr[i - 1] > c) morec++;
	}
	return morec;
}


double fmult(double* arr, int l)
{
	double maxinarr;
	int i = 0;
	maxinarr = abs(arr[0]);
	int pmaxinarr = 0;
	double mult = 1.;
	while (i++ < l) {
		if (abs(arr[i - 1]) > maxinarr) {
			maxinarr = abs(arr[i - 1]);
			pmaxinarr = i - 1;
		}
	}
	while (pmaxinarr++ < l - 1) {
		mult = mult * arr[pmaxinarr];
	}
	return mult;
}


double fmaxinarr(double* arr, int l)
{
	double maxinarr;
	int i = 0;
	maxinarr = abs(arr[0]);
	while (i++ < l) {
		if (abs(arr[i - 1]) > maxinarr) {
			maxinarr = abs(arr[i - 1]);
		}
	}
	return maxinarr;
}


int fpmaxinarr(double* arr, int l)
{
	double maxinarr;
	int i = 0;
	maxinarr = abs(arr[0]);
	int pmaxinarr = 0;
	while (i++ < l) {
		if (abs(arr[i - 1]) > maxinarr) {
			maxinarr = abs(arr[i - 1]);
			pmaxinarr = i - 1;
		}
	}
	return pmaxinarr;
}


void my_sort(double* arr, int l, double* arr2)
{
	int pli = l-1;
	int mini = 0;
	for (size_t i = 0; i < l; i++) {
		//cout << i << endl;
		if (arr[i] < 0) {
			arr2[mini] = arr[i];
			mini++;
		}
		else {
			arr2[pli] = arr[i];
			pli--;
		}
		//cout << arr2[0] << "; " << arr2[1] << "; " << arr2[2] << "; " << arr2[3] << "; " << arr2[4] << endl;
	}
}
