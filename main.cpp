#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char fileName[20];
	cout<<"Введите имя файла в виде \"Имя.расширение\": ";
	cin.getline(fileName, 20);
	ofstream file(fileName /*ИМЯ ФАЙЛА*/, ios::app);
	
	cout<<"Ctrl+z - конец диалога"<<endl;
	cout<<"Начало диалог"<<endl;
	string str;
	while(!feof(stdin)){
		getline(cin, str);
		file<<str<<endl;
	}
	cout<<"Конец диалога";
	file.close();
	return 0;
}
