#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char fileName[20];
	cout<<"������� ��� ����� � ���� \"���.����������\": ";
	cin.getline(fileName, 20);
	ofstream file(fileName /*��� �����*/, ios::app);
	
	cout<<"Ctrl+z - ����� �������"<<endl;
	cout<<"������ ������"<<endl;
	string str;
	while(!feof(stdin)){
		getline(cin, str);
		file<<str<<endl;
	}
	cout<<"����� �������";
	file.close();
	return 0;
}
