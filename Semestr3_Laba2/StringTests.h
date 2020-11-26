#pragma once

#include "../String/String.h"

//класс с тестами
class StringTests
{
public:

	//тест конструктора по умолчанию
	void defaultConstructor();

	//тест конструктора c параметрами
	void parametrConstructor();
	
	//тест конструктора копирования
	void copyConstructor();

	//геттеры тестировать нет смысла, т.к. там простой код, который только возвращает

	//тест метода изменения строки
	void setStr();

	//тест метода поиска подстроки
	void subStr();

	//тест метода объединения строк
	void concate();



	//тест сложения со строкой String
	void sumWithStringOperator();

	//тест сложения со строкой char *
	void sumWithCharOperator();

	//тест оператора присваивания
	void assignOperator();

	//тест операторов сравнения строк
	void compareOperators();
};

