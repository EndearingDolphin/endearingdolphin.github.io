/*
    Name: Justin Fifarek
    Project: Appointment management app
    Module: main file
*/

#include <iostream>
#include <string>
#include "main.h"

void displayMenu() {
    std::cout << "Main menu: " << std::endl;
    std::cout << "  1. Contacts" << std::endl;
    std::cout << "  2. Tasks" << std::endl;
    std::cout << "  3. Appointments" << std::endl;
    std::cout << "  9. Exit program" << std::endl;
}

void processMenu(int option) {
    switch(option) {
        default:
            std::cout << "Invalid option, please try again." << std::endl;
            break;
        case 1:
            contactsMenu();
            break;
        case 2:
            tasksMenu();
            break;
        case 3:
            appointmentsMenu();
            break;
        case 9:
            std::cout << "Option 9 selected, exiting program..." << std::endl;
            exit(0);
    }
}

void contactsMenu() {
    std::cout << "Contacts menu: " << std::endl;
    std::cout << "  1. Add a contact" << std::endl;
    std::cout << "  2. Edit a contact" << std::endl;
    std::cout << "  3. Delete a contact" << std::endl;
    std::cout << "  9. Back to main menu" << std::endl;
    int option = 0;
    while (option != 9) {
        std::cout << "Enter menu choice (1-3, 9): ";
        std::cin >> option;
        switch(option) {
            default:
                std::cout << "Invalid option, please try again." << std::endl;
            case 1:
                std::cout << "Contact menu option 1" << std::endl;
                break;
            case 2:
                std::cout << "Contact menu option 2" << std::endl;
                break;
            case 3:
                std::cout << "Contact menu option 3" << std::endl;
                break;
            case 9:
                main();
                break;
        }
    }
}

void tasksMenu() {
    std::cout << "Tasks menu: " << std::endl;
    std::cout << "  1. Add a task" << std::endl;
    std::cout << "  2. Edit a task" << std::endl;
    std::cout << "  3. Delete a task" << std::endl;
    std::cout << "  9. Back to main menu" << std::endl;
    int option = 0;
    while (option != 9) {
        std::cout << "Enter menu choice (1-3, 9): ";
        std::cin >> option;
        switch(option) {
            default:
                std::cout << "Invalid option, please try again." << std::endl;
            case 1:
                std::cout << "Task menu option 1" << std::endl;
                break;
            case 2:
                std::cout << "Task menu option 2" << std::endl;
                break;
            case 3:
                std::cout << "Task menu option 3" << std::endl;
                break;
            case 9:
                main();
                break;
        }
    }
}

void appointmentsMenu() {
    std::cout << "Appointments menu: " << std::endl;
    std::cout << "  1. Add a appointment" << std::endl;
    std::cout << "  2. Edit a appointment" << std::endl;
    std::cout << "  3. Delete a appointment" << std::endl;
    std::cout << "  9. Back to main menu" << std::endl;
    int option = 0;
    while (option != 9) {
        std::cout << "Enter menu choice (1-3, 9): ";
        std::cin >> option;
        switch(option) {
            default:
                std::cout << "Invalid option, please try again." << std::endl;
            case 1:
                std::cout << "Appointment menu option 1" << std::endl;
                break;
            case 2:
                std::cout << "Appointment menu option 2" << std::endl;
                break;
            case 3:
                std::cout << "Appointment menu option 3" << std::endl;
                break;
            case 9:
                main();
                break;
        }
    }
}

int main() {
    int option = 0;
    while (true) {
        displayMenu();
        std::cout << "Enter menu choice (1-3, 9): ";
        std::cin >> option;

        processMenu(option);
        std::cout << std::endl;
    }
    exit(0);
}