#ifndef COLLECTIONS_STUDENT_H
#define COLLECTIONS_STUDENT_H

#include "discipline.h"

#include <vector>

using std::vector;

typedef struct {
    string name, surname, patronymic;
    vector<discipline> disciplines;

    float get_average_grade() const;

    string to_string() const;
} student;

#endif //COLLECTIONS_STUDENT_H
