#define _CRT_SECURE_NO_WARNINGS 1

struct stringy
{
	char* string;
	int S_length;
};

#include<string>
#include<fstream>
#include<iostream> 
void show(stringy &b1, int m = 1)
{
	for (int i = 0; i < m; i++)
	{
		puts(b1.string);
	}
}
template<typename T>T max5(T* arr);
template<typename T>T maxn(T* arr,int m);
template<typename T> void show(T &b1,int m=1)
{
	using namespace std;
	for (int i = 0; i < m; i++)
	{
		cout << b1 << endl;
	}
}
void Setbeany(stringy &b1,char* pstr)
{
    char* ps= new char[strlen(pstr)];
	ps = pstr;
	b1.string = ps;
	puts(b1.string);
	b1.S_length++;
}
int main(char argc, char** argv)
{
	stringy beany;
	char testing[] = "reality isn't what it used to be";
	Setbeany(beany,testing);

	show(beany);
	show(beany, 2);
	testing[0] = 'd';
	testing[1] = 'u';

	show(testing);
	show(testing, 3);
	show("done");
	int arr[5] = { 4,3,6,22,1};
	auto m=max5(arr);

	double arr1[] = { 2.4,54.7,23.6,79.6,675.3,999.9 };
	auto rev = maxn(arr1, sizeof(arr1) / sizeof(arr1[0]));
	std::cout << rev;
	return 0;
}


template<typename T>T max5(T* arr)
{
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr[4];
}
template<typename T>T maxn(T* arr,int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr[m-1];
}