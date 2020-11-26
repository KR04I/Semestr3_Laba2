#include "StringTests.h"

#include <iostream>

using namespace std;

void StringTests::defaultConstructor()
{
	char expectedStr[] = "";
	int expectedSize = strlen(expectedStr);

	String received;

	cout << "Default constructor test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;
	
	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in default constructor!");

	if(expectedSize != received.getSize())
		throw exception("Error in default constructor!");

	cout << "Default constructor was tested succesfully!" << endl;
}

void StringTests::parametrConstructor()
{
	char expectedStr[] = "1234567";
	int expectedSize = strlen(expectedStr);

	String received(expectedStr);

	cout << "Parametr constructor test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;

	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in parametr constructor!");

	if (expectedSize != received.getSize())
		throw exception("Error in parametr constructor!");

	cout << "Parametr constructor was tested succesfully!" << endl;
}

void StringTests::copyConstructor()
{
	char expectedStr[] = "1234567";
	int expectedSize = strlen(expectedStr);

	String copy(expectedStr), received(copy);

	cout << "Copy constructor test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;

	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in copy constructor!");

	if (expectedSize != received.getSize())
		throw exception("Error in copy constructor!");

	cout << "Copy constructor was tested succesfully!" << endl;
}

void StringTests::setStr()
{
	char expectedStr[] = "1234567";
	int expectedSize = strlen(expectedStr);

	String received;
	received.setStr(expectedStr);

	cout << "setStr() test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;

	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in setStr()!");

	if (expectedSize != received.getSize())
		throw exception("Error in setStr()!");

	cout << "setStr() was tested succesfully!" << endl;
}

void StringTests::subStr()
{
	char str[] = "1234567";
	char findStr[] = "123";

	int expected = 0;

	String obj(str);

	cout << "subStr() test: " << endl;
	cout << "Expected result:" << endl;
	cout << expected << endl;

	cout << "Received result:" << endl;
	int received = obj.subStr(findStr);
	cout << received << endl;

	if (expected != received)
		throw exception("Error in subStr()!");

	cout << "subStr() was tested succesfully!" << endl;
}

void StringTests::concate()
{
	char strForObj1[] = "obj1";
	char strForObj2[] = "obj2";

	String obj1(strForObj1), obj2(strForObj2);

	char expectedStr[] = "obj1obj2";
	int expectedSize = strlen(expectedStr);

	String received(obj1.concate(obj2));

	cout << "concate() test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;

	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in concate()!");

	if (expectedSize != received.getSize())
		throw exception("Error in concate()!");

	cout << "concate() was tested succesfully!" << endl;
}



void StringTests::sumWithStringOperator()
{
	char strForObj1[] = "obj1";
	char strForObj2[] = "obj2";

	String obj1(strForObj1), obj2(strForObj2);

	char expectedStr[] = "obj1obj2";
	int expectedSize = strlen(expectedStr);

	String received(obj1 + obj2);

	cout << "Sum with String operator test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;

	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in sum with String operator!");

	if (expectedSize != received.getSize())
		throw exception("Error in sum with String operator!");

	cout << "Sum with String operator was tested succesfully!" << endl;
}

void StringTests::sumWithCharOperator()
{
	char strForObj1[] = "obj1";
	char strForObj2[] = "obj2";

	String obj1(strForObj1), obj2(strForObj2);

	cout << "Sum with char * operator test: " << endl;

	{
		char expectedStr[] = "obj2";
		int expectedSize = strlen(expectedStr);

		String received(obj1 + strForObj2);

		cout << "Expected result:" << endl;
		cout << expectedStr << endl;
		cout << "Size: " << expectedSize << endl;

		cout << "Received result:" << endl;
		cout << received.getStr() << endl;
		cout << "Size: " << received.getSize() << endl;

		if (strcmp(expectedStr, received.getStr()))
			throw exception("Error in sum with char * operator!");

		if (expectedSize != received.getSize())
			throw exception("Error in sum with char * operator!");
	}

	{
		char expectedStr[] = "obj1";
		int expectedSize = strlen(expectedStr);

		String received(strForObj1 + obj2);

		cout << "Expected result:" << endl;
		cout << expectedStr << endl;
		cout << "Size: " << expectedSize << endl;

		cout << "Received result:" << endl;
		cout << received.getStr() << endl;
		cout << "Size: " << received.getSize() << endl;

		if (strcmp(expectedStr, received.getStr()))
			throw exception("Error in sum with char * operator!");

		if (expectedSize != received.getSize())
			throw exception("Error in sum with char * operator!");
	}

	cout << "Sum with char * operator was tested succesfully!" << endl;
}

void StringTests::assignOperator()
{
	char expectedStr[] = "1234567";
	int expectedSize = strlen(expectedStr);

	String copy(expectedStr), received = copy;

	cout << "Assign operator test: " << endl;
	cout << "Expected result:" << endl;
	cout << expectedStr << endl;
	cout << "Size: " << expectedSize << endl;

	cout << "Received result:" << endl;
	cout << received.getStr() << endl;
	cout << "Size: " << received.getSize() << endl;

	if (strcmp(expectedStr, received.getStr()))
		throw exception("Error in assign operator!");

	if (expectedSize != received.getSize())
		throw exception("Error in assign operator!");

	cout << "Assign operator was tested succesfully!" << endl;
}

void StringTests::compareOperators()
{
	char strForObj1[] = "obj1";
	char strForObj2[] = "obj2";

	String obj1(strForObj1), obj2(strForObj2);

	cout << "Compare operators test: " << endl;
	
	{
	bool expected = 1;
	bool received = (obj1 != obj2);

	cout << "Expected result:" << endl;
	cout << expected << endl;

	cout << "Received result:" << endl;
	cout << received << endl;

	
	if (expected != received)
		throw exception("Error in compare operators!");
	}

	{
		bool expected = 0;
		bool received = (obj1 == obj2);

		cout << "Expected result:" << endl;
		cout << expected << endl;

		cout << "Received result:" << endl;
		cout << received << endl;


		if (expected != received)
			throw exception("Error in compare operators!");
	}

	{
		bool expected = 1;
		bool received = (obj1 < obj2);

		cout << "Expected result:" << endl;
		cout << expected << endl;

		cout << "Received result:" << endl;
		cout << received << endl;


		if (expected != received)
			throw exception("Error in compare operators!");
	}

	{
		bool expected = 0;
		bool received = (obj1 > obj2);

		cout << "Expected result:" << endl;
		cout << expected << endl;

		cout << "Received result:" << endl;
		cout << received << endl;


		if (expected != received)
			throw exception("Error in compare operators!");
	}

	{
		bool expected = 1;
		bool received = (obj1 <= obj2);

		cout << "Expected result:" << endl;
		cout << expected << endl;

		cout << "Received result:" << endl;
		cout << received << endl;


		if (expected != received)
			throw exception("Error in compare operators!");
	}

	{
		bool expected = 0;
		bool received = (obj1 >= obj2);

		cout << "Expected result:" << endl;
		cout << expected << endl;

		cout << "Received result:" << endl;
		cout << received << endl;


		if (expected != received)
			throw exception("Error in compare operators!");
	}

	cout << "Compare operators was tested succesfully!" << endl;
}
