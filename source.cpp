#include <iostream>
using namespace std;


int hieu(int a, int b){
	return a-b;)

int tong(int a, int b){
return a+b;}

int tinhtich(int a, int b){
	return a*b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";	
	cin >> phepToan;

	if(phepToan=="-")
	
		cout<<hieu(a,b);

	if(pheptoan=="+")
		cout<<tong(a,b);

	system("pause");
	return 0;
}