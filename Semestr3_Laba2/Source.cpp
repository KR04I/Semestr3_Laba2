
#include "StringTests/StringTests.h"

#include <iostream>

using namespace std;

int main()
{
	StringTests tester;

	try
	{
		tester.defaultConstructor();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.parametrConstructor();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.copyConstructor();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.setStr();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.subStr();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.concate();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.sumWithStringOperator();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.sumWithCharOperator();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.assignOperator();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;

	try
	{
		tester.compareOperators();
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}
	cout << endl;
	
	cout << "Press any key :" << endl;
	char c;
	cin >> c;


	return 0;
}