#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

class WeightMachine {
private:
    string name;
    string muscleGroup;
    double caloriesBurntPerRep;
    double maxWeight;

public:
    WeightMachine(string& n, string& mg, double cbRep, double maxW);
    string getName();
    void setName(string& n);
    string getMuscleGroup();
    void setMuscleGroup(string& mg);
    double getCaloriesBurntPerRep();
    void setCaloriesBurntPerRep(double cbRep);
    double getMaxWeight();
    void setMaxWeight(double maxW);
};