#include<iostream>
using namespace std;
int factorialFuntion(int &n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact*i;
	}
	return fact;
}
int main()
{
	int Number;
	cout << "Enter the Factorial Number : ";
	cin >> Number;
	cout << "Factorial Number : " << factorialFuntion(Number)<<endl;
	return 0;
}