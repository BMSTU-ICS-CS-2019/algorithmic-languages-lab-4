#include "student.h"

string student::to_string() {
    string result = "{ " + name + " " + surname + " " + patronymic + " { ";
    for (auto &discipline : disciplines) result += discipline.to_string() + " ";
    return result + "} }";
}