#include "muscleGroup.h"

MuscleGroup::MuscleGroup() : name("") {}

MuscleGroup::MuscleGroup(const string& n) : name(n) {}

string MuscleGroup::getName() const {
    return name;
}

void MuscleGroup::setName(const string& n) {
    name = n;
}
