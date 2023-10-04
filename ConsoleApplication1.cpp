#include <iostream>
#include <vector>




void vectMain() {

    int stripe_num = 50;
    char stripe = '=';

    std::vector<int> number_age = { 1, 2, 5, 10, 15, 47, 52, 70, 100 };
    std::vector<std::string> users = { "Julia", "Elena", "Ivan", "Maxim", "Luda", "Vika", "Anjela" }; 
    std::vector<std::string> users_city = {"Kiev", "Odessa", "Dnepr", "Kharkov", "Ujgorod"};

    std::cout << "Вектор содержит = " << number_age.size() << " элементов" << std::endl;
    
    for (int a = 0; a <= stripe_num; a++) {
        std::cout << stripe;
    }


    std::cout << "\nТип вектора = " << typeid(number_age).name() << std::endl;

    for (int a = 0; a <= stripe_num; a++) {
        std::cout << stripe;
    }

}

const int cinTerm = 5;

void vectorCinOut() {
    int vectors_num = 5;

    std::vector<int> vc;

    std::cout << "Введите вектор: ";

    // Используем цикл для перебора вектора

    while ((std::cin >> vectors_num) && vectors_num != cinTerm) {
        vc.push_back(vectors_num);
    }

    // Выводим 

    std::cout << "Элементов в векторе: " << std::endl;
    for (int i : vc) {
        std::cout << i << " ";
    }
}




int main()
{   
    // Локализация русского языка
    setlocale(LC_ALL, "Russian");

    // Cоздаем переменные для цикла, и выводим их 

    //char star = '*';
   // int star_num = 50;

    vectorCinOut();
    

    
   // vectMain();

    //std::vector<int> name_age = {1, 10, 40, 90, 250, 1000};

    //std::cout << "\nЦентральный вектор содержит в себе = " << name_age.size() << " элементов\n" << std::endl;

    

    //for (int a = 0; a <= star_num; a++) {
   //     std::cout << star;
   // }

    //std::cout << std::endl;



    system("pause");
    return 0;
}



