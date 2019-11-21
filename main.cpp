#include "discipline.h"
#include "student.h"

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    cout << "Hi there!";

    size_t count;
    cout << "Enter the number of students: ";
    cin >> count;

    for (size_t i = 0; i < count; i++) {
        student student;
        // TODO read student
    }

    cout << "Thanks and Goodbye";
}
