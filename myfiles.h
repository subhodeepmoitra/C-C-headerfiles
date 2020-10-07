#include <iostream>
#include <fstream>
using namespace std;
int fcchar( char x , char name[] )
{
	ifstream fin;
	fin.open ( name );
	char ch;
	int count = 0;
	while (!fin.eof())
	{
		fin.get(ch);
		if (ch == x){
			count++;
		}
	}
	return count;
	fin.close();
}
int fcspace(char name[])
{
	ifstream fin;
	fin.open(name);
	char ch;
	int count = 0;
	while (!fin.eof() ) {
		fin.get(ch);
		if (ch == ' '){
			count++;
		}
	}
	return count;
	fin.close();
}
int fcword ( char name[] )
{
	ifstream fin;
	fin.open(name);
	char ch;
	int count = 0;
	while (!fin.eof() ) {
		fin.get(ch);
		if (ch == ' '){
			count++;
		}
	}
	return count-1;
	fin.close();
}
