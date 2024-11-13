#pragma once

// CSCN72030 - Project 3 - Fall24 - Group 3
// heartrate signatures

#define HEARTRATEFILE "heartrate.txt"
#include <iostream>
#include <fstream>
using namespace std;
#include "string"

class Heartrate {
public:
	int bpm;
	int restingBpm;
	int activeBpm;
public:
	// constructor
	Heartrate() {
		// create file on initialization
		createHeartrateFile();
	}

	// deconstructor
	~Heartrate() {

	}

	bool createHeartrateFile() {
		// create file
		ofstream file(HEARTRATEFILE);

		// if error return false
		if (!file) {
			cout << "Error creating file" << endl;
			return false;
		}

		cout << "create file: " << HEARTRATEFILE << endl;
		//file << 10 << endl;

		// close file
		file.close();

		return true;
	}

	// read heartrate from file
	int readBpm() {
		// input stream
		ifstream file(HEARTRATEFILE);

		// error handling
		if (!file) {
			cout << "Error creating file" << endl;
			return false;
		}

		string line, lastLine;

		// loop until last line
		while (getline(file, line)) {
			// set lastLine
			lastLine = line;
		}

		// convert lastline to int and return
		return stoi(lastLine);
	}

	// set bpm
	bool setBpm();

	// calculate resting BPM
	int calculateRestingBpm();

	// set resting bpm from calculation
	bool setRestingBpm();

	// calculate resting BPM
	int calculateActiveBpm();

	// set resting bpm from calculation
	bool setActiveBpm();

	// send bpm to HMI/SCADA
	int sendBpmToHMI();
};