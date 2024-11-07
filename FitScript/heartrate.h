#pragma once

// CSCN72030 - Project 3 - Fall24 - Group 3
// heartrate signatures

class Heartrate {
public:
	int bpm;
public:
	// read heartrate from file
	int readHeartrate();

	// display heartrate
	int displayHeartrate();

	// get average bpm
	int getAverageBpm();

	// write to file
	void writeHeartrate();
};