// ConsoleApplication58.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Address {
    char street[50];
    char city[50];
};
struct Employee {
    char name[50];
    int ID;
    Address address;
    int age;
    float salary;
};

int main() {
    string file_path;
    int num_employees = 0;
    Employee employees[100];
    cout << "Enter the path of the file: ";
    cin >> file_path;

    ifstream file(file_path);
    if (!file.is_open()) {
        cout << "Error opening the file. Make sure the path is correct.\n";
        return 1;
    }

    while (file >> employees[num_employees].name
        >> employees[num_employees].ID
        >> employees[num_employees].address.street
        >> employees[num_employees].address.city
        >> employees[num_employees].age
        >> employees[num_employees].salary) {
        num_employees++;
    }

    file.close();

    
    int search_ID;
    cout << "Enter the ID of the employee you want to search: ";
    cin >> search_ID;

    
    int found = 0;
    for (int i = 0; i < num_employees; i++) {
        if (employees[i].ID == search_ID) {
            cout << "Employee found!\n";
            cout << "Name: " << employees[i].name << endl;
            cout << "ID: " << employees[i].ID << endl;
            cout << "Address: " << employees[i].address.street << "-" << employees[i].address.city << endl;
            cout << "Age: " << employees[i].age << endl;
            cout << "Salary: " << employees[i].salary << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << "Employee not found with the provided ID.\n";
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
