#include "discipline.h"

using std::to_string;

string discipline::to_string() const {
    return name + ":" + ::to_string(grade);
}