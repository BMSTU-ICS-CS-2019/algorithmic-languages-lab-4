#ifndef COLLECTIONS_DISCIPLINE_H
#define COLLECTIONS_DISCIPLINE_H

#include <string>

using std::string;

typedef struct {
    string name;
    unsigned short grade;

    string to_string();
} discipline;

#endif //COLLECTIONS_DISCIPLINE_H
