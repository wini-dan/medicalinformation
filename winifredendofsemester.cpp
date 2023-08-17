#include <iostream>
#include <vector>
#include <string>

// Define a structure to hold patient information
struct Patient {
    std::string name;
    int age;
    std::string condition;
};

int main() {
    std::vector<Patient> patients;  // Store patient records

    while (true) {
        // Display menu
        std::cout << "Medical Information System\n";
        std::cout << "1. Add Patient\n";
        std::cout << "2. Display Patients\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Patient patient;
                std::cout << "Enter patient name: ";
                std::cin >> patient.name;
                std::cout << "Enter patient age: ";
                std::cin >> patient.age;
                std::cout << "Enter patient condition: ";
                std::cin >> patient.condition;

                patients.push_back(patient);
                std::cout << "Patient added.\n";
                break;
            }
            case 2: {
                std::cout << "Patient List:\n";
                for (const Patient& patient : patients) {
                    std::cout << "Name: " << patient.name << "\n";
                    std::cout << "Age: " << patient.age << "\n";
                    std::cout << "Condition: " << patient.condition << "\n";
                    std::cout << "--------------------------\n";
                }
                break;
            }
            case 3:
                std::cout << "Exiting.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

