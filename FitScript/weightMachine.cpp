#include "weightMachine.h"

WeightMachine::WeightMachine() : name(""), muscleGroup(), caloriesBurntPerRep(0.0), maxWeight(0.0) {}

WeightMachine::WeightMachine(string& n, MuscleGroup mg, double cbRep, double maxW) {
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


MuscleGroup WeightMachine::getMuscleGroup() {
    return muscleGroup;
}


void WeightMachine::setMuscleGroup(MuscleGroup mg) {
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
