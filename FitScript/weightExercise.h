#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "weightMachine.h"

class WeightExercise {
private:
    WeightMachine weightMachine;
    double weight;
    int sets;
    int repetitions;

public:
    WeightExercise();
    WeightExercise(WeightMachine& wm, double w, int s, int r);
    WeightMachine getWeightMachine();
    void setWeightMachine(WeightMachine& wm);
    double getWeight();
    void setWeight(double w);
    int getSets();
    void setSets(int s);
    int getRepetitions();
    void setRepetitions(int r);
};
