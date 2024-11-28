#include <iostream>

struct grades {

    char coursecode[10];
    int lab;
    float exam[2];
};

struct personal {

    int id;
    char name[30];
    char surname[30];
};

struct student {

    personal info;
    grades course[2];
};
 
int main() {

    student data[3];
    for(int i=0;i<3;i++) {

        std::cout << "Enter student id:\n";
        std::cin >> data[i].info.id; 

        std::cout << "Enter student name:\n";
        std::cin >> data[i].info.name; 

        std::cout << "Enter student surname:\n";
        std::cin >> data[i].info.surname;

        for(int j=0;j<2;j++) {

            std::cout << "Enter Course Code " << j+1 << " :\n ";
            std::cin >> data[i].course[j].coursecode;

            std::cout << "Enter lab " << j+1 << " : \n";
            std::cin >> data[i].course[j].lab;

            std::cout << "Enter Midterm & Final \n" << j+1 << " : ";
            std::cin >> data[i].course[j].exam[0] >> data[i].course[j].exam[1];
        } 
    }

    for(int i=0;i<3;i++) {

        std::cout << data[i].info.id << "\n";
        std::cout << data[i].info.name << "\n";
        std::cout << data[i].info.surname << "\n";

        for(int j=0;j<2;j++) {

            std::cout << data[i].course[j].coursecode;
            std::cout << data[i].course[j].lab;
            std::cout << data[i].course[j].exam[0] << " " << data[i].course[j].exam[1];
        }
    }
}