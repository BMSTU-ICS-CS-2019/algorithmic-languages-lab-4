#include "student.h"

float student::get_average_grade() const {
    auto average_grade = 0.f;
    for (const auto &discipline : disciplines) average_grade += (float) discipline.grade;
    return average_grade / disciplines.size();
}

string student::to_string() const {
    string result = "{ " + name + " " + surname + " " + patronymic + " { ";
    for (const auto &discipline : disciplines) result += discipline.to_string() + " ";
    return result + "} }";
}