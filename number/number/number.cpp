#include <iostream>

 struct Person {
	std::string name = "";
	unsigned int age;

} ;




int main()
{

	// Локализация

	setlocale(LC_ALL, "Ru");

	int a = 5.1; // класическая инициализация

	int b{ 1 }; // Инициализация списком

	std::cout << a << std::endl;

	// Инициализация списком

	std::cout << b << std::endl;

	// Обьявляем структуру через ввод cin;

	Person p1;

	std::cout << "Введите ваше имя: ";
	std::cin >> p1.name;
	std::cout << "Введите ваш возраст: ";
	std::cin >> p1.age;

	std::cout << "Привет,  " << p1.name << "тебе " << p1.age << " лет!" << std::endl;




}

