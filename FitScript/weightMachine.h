#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "muscleGroup.h"

using namespace std;

class WeightMachine {
private:
    string name;
    MuscleGroup muscleGroup;
    double caloriesBurntPerRep;
    double maxWeight;

public:
    WeightMachine();
    WeightMachine(string& n, MuscleGroup mg, double cbRep, double maxW);
    string getName();
    void setName(string& n);
    MuscleGroup getMuscleGroup();
    void setMuscleGroup(MuscleGroup mg);
    double getCaloriesBurntPerRep();
    void setCaloriesBurntPerRep(double cbRep);
    double getMaxWeight();
    void setMaxWeight(double maxW);
};