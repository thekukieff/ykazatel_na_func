#include <iostream>

//тип_функции (*имя_указателя) (параметры функции) 
/*
std::string Data_from_db(std::string a) {
	return a;
}

std::string Data_from_web(std::string data) {
	return data;
}

void ShowTrueInfo(std::string (*dataPtr)(std::string a)) {
	std::cout << dataPtr("1");
}

void Foo() {
	std::cout << "Это функция\n";
}

void Foe(int one) {
	std::cout << one << std::endl;
}
*/
void Calculate();

float Plus(float first, float second);

float Minus(float first, float second);

float Ymnoshit(float first, float second);

float Delenie(float first, float second);

float Procent(float first, float second);

void Make_Decision(float(*dataPtr)(float first, float second));

int main() {
	setlocale(LC_ALL, "ru");

	Calculate();



	/*void (*ptr)();
	ptr = Foo;
	ptr();

	void (*ptr1)(int one);
	ptr1 = Foe;
	ptr1(1);

	ShowTrueInfo(Data_from_db);*/

	return 0;
}

void Calculate()
{
	char move;

	std::cout << "Введите действие: /, +, -, *, %:";
	std::cin >> move;

	if (move == '/') {
		Make_Decision(Delenie);
	}
	else if (move == '+') {
		Make_Decision(Plus);
	}
	else if (move == '-'){
		Make_Decision(Minus);
	}
	else if (move == '*') {
		Make_Decision(Ymnoshit);
	}
	else if (move == '%') {
		Make_Decision(Procent);
	}


	
}

void Make_Decision(float(*dataPtr)(float first, float second))
{
	float first, second;
	std::cout << "\nВведите первое число: ";
	std::cin >> first;
	std::cout << "\nВведите второе число: ";
	std::cin >> second;
	std::cout <<"Ответ: " << dataPtr(first, second);
}

float Plus(float first, float second) {
	return first + second;
}

float Minus(float first, float second)
{
	return first - second;
}

float Ymnoshit(float first, float second)
{
	return first * second;
}

float Delenie(float first, float second)
{
	return first/second;
}

float Procent(float first, float second)
{

	return first/second*100;
}


