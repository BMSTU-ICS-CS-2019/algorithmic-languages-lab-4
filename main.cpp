#include "student.h"

#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::vector;

int main() {
    cout << "Hi there!" << endl;

    size_t count;
    cout << "Enter the number of students: ";
    cin >> count;

    vector<student> students(count);
    for (size_t i = 0; i < count; i++) {
        student student;

        cout << "Enter name surname and patronymic: ";
        cin >> student.name >> student.surname >> student.patronymic;

        size_t student_count;
        cout << "Enter number of disciplines: ";
        cin >> student_count;

        for (size_t discipline_id = 0; discipline_id < student_count; discipline_id++) {
            discipline discipline;

            cout << "Enter discipline name: ";
            cin >> discipline.name;

            cout << "Enter discipline grade: ";
            cin >> discipline.grade;
            student.disciplines.push_back(discipline);
        }

        students[i] = student;
    }

    sort(students.begin(), students.end(), [](student &student1, student &student2) -> bool {
        auto comparison_result = student1.name.compare(student2.name);
        if (comparison_result < 0) return true;
        if (comparison_result > 0) return false;

        comparison_result = student1.surname.compare(student2.surname);
        if (comparison_result < 0) return true;
        if (comparison_result > 0) return false;

        return student1.patronymic <= student2.patronymic;
    });

    cout << "Sorted:" << endl;
    for (auto &student : students) cout << "\t" << student.to_string() << endl;

    cout << "Thanks and Goodbye";
}
