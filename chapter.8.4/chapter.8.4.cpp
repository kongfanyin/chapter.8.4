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
template<typename T>T maxT(T* arr);
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

	return 0;
}
template<typename T>T maxT(T* arr)
{
	int i = 5;
	int n=sizeof T;
	

}