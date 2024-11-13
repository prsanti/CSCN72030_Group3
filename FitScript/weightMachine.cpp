#include "weightMachine.h"


WeightMachine::WeightMachine(string& n, string& mg, double cbRep, double maxW) {
    name = n;
    muscleGroup = mg;
    caloriesBurntPerRep = cbRep;
    maxWeight = maxW;
}


string WeightMachine::getName() {
    return name;
}


void WeightMachine::setName(string& n) {
    name = n;
}


string WeightMachine::getMuscleGroup() {
    return muscleGroup;
}


void WeightMachine::setMuscleGroup(string& mg) {
    muscleGroup = mg;
}


double WeightMachine::getCaloriesBurntPerRep() {
    return caloriesBurntPerRep;
}


void WeightMachine::setCaloriesBurntPerRep(double cbRep) {
    caloriesBurntPerRep = cbRep;
}


double WeightMachine::getMaxWeight() {
    return maxWeight;
}


void WeightMachine::setMaxWeight(double maxW) {
    maxWeight = maxW;
}
