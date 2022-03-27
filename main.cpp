#include <vector>
#include <iostream>
#include <string>

#define DIVIDER() std::cout << "###################" << "\n";
struct car_t {
        
        std::string marka, model, kolor;
        uint16_t rok_produkcji;

};

std::vector<car_t> car_list;

void add_car_to_list(car_t const &car) {
        car_list.push_back(car);
}

void print_car(car_t* car) {
        std::cout << car->marka << " " << car->model << " " << car->kolor << " " << car->rok_produkcji << "\n"; 
}

void print_car_list() {

        for(int i = 0; i<car_list.size();i++){
                std::cout << i <<  ". ";
                print_car(&car_list[i]);
        }
}

int main(int argc, const char **argv) {
                
        unsigned short choice;
        car_t car;
        while(true) {
                

                std::cout << "1 - Dodaj Auto\n2 - Wyświetl liste aut\n";
                std::cin >> choice; 
                switch(choice) {

                        case 1:
                                std::cout << "kolor auta?\n";
                                std::cin >> car.kolor; 
                                
                                std::cout << "marka auta?\n";
                                std::cin >> car.marka; 
                                
                                std::cout << "model auta?\n";
                                std::cin >> car.model;
                                
                                std::cout << "rok produkcji auta?\n";
                                std::cin >> car.rok_produkcji;

                                print_car(&car);
                                
                                add_car_to_list(car);
                               
                                break;
                        
                        case 2:
                                DIVIDER();
                                print_car_list();
                                DIVIDER();
                                break;
                }
        }
}
