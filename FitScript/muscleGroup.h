#pragma once
#include <string>

using namespace std;

class MuscleGroup {
private:
    string name;

public:
    MuscleGroup();
    MuscleGroup(const string& n);
    string getName() const;
    void setName(const string& n);
};
