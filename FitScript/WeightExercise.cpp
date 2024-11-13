#include "weightExercise.h"

WeightExercise::WeightExercise() : weight(0.0), sets(0), repetitions(0) {}

WeightExercise::WeightExercise(WeightMachine& wm, double w, int s, int r) {
    weightMachine = wm;
    weight = w;
    sets = s;
    repetitions = r;
}

WeightMachine WeightExercise::getWeightMachine() {
    return weightMachine;
}

void WeightExercise::setWeightMachine(WeightMachine& wm) {
    weightMachine = wm;
}

double WeightExercise::getWeight() {
    return weight;
}

void WeightExercise::setWeight(double w) {
    weight = w;
}

int WeightExercise::getSets() {
    return sets;
}

void WeightExercise::setSets(int s) {
    sets = s;
}

int WeightExercise::getRepetitions() {
    return repetitions;
}

void WeightExercise::setRepetitions(int r) {
    repetitions = r;
}
