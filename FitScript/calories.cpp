#include <iostream>
#include <fstream>
#include <string>
#include <utility> // For std::pair

using namespace std;

class Calories {
private:
    int caloriesBurned;
    int caloriesGained;

public:
    
    Calories() : caloriesBurned(0), caloriesGained(0) {}            //calories constructor

    ~Calories() {}                                                  //calories destructor

    // Reads calorie data from a file specified by filePath
    bool readCaloriesFromFile(const string& filePath) {
        ifstream file(filePath);
        if (!file) {
            cerr << "Failed to open file: " << filePath << endl;
            return false;
        }

        int burned, gained;
        file >> burned >> gained;
        if (validateCaloriesData(burned) && validateCaloriesData(gained)) {
            caloriesBurned = burned;
            caloriesGained = gained;
            file.close();
            return true;
        }
        else {
            cerr << "Invalid calorie data in file." << endl;
            file.close();
            return false;
        }
    }

    // Validates the calorie data provided as input
    bool validateCaloriesData(int calories) {
        return calories >= 0 && calories <= 10000; // Example range for realistic calorie values
    }

    // Retrieves the current calorie data
    pair<int, int> getCaloriesData() const {
        return { caloriesBurned, caloriesGained };
    }

    // Resets the calorie data to default values
    bool resetCalories() {
        caloriesBurned = 0;
        caloriesGained = 0;
        return true;
    }

    // Additional functions to manually set caloriesBurned and caloriesGained if needed
    void setCaloriesBurned(int burned) {
        if (validateCaloriesData(burned)) {
            caloriesBurned = burned;
        }
        else {
            cerr << "Invalid value for calories burned." << endl;
        }
    }

    void setCaloriesGained(int gained) {
        if (validateCaloriesData(gained)) {
            caloriesGained = gained;
        }
        else {
            cerr << "Invalid value for calories gained." << endl;
        }
    }
};