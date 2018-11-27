#include <iostream>
#include "stdafx.h"
#include <string>

using namespace std;

void date(string date) {
	
	int day, month, year, hour, minutes;
	
	sscanf_s(date.c_str(), "%2d/%2d/%4d %2d:%2d", &day, &month, &year, &hour, &minutes); // The scan function reads the date string and stores the date values 

	if (month <= 0 || day >= 0 || year >= 0) {
		throw invalid_argument("Invalid Date");				//! Throw an error due to an invalid date
	}

	if (month >= 13 || day >= 32 || hour >= 25 || minutes >= 61) {
		throw invalid_argument("Inva5lid Date");				//! Throw an error due to an invalid date
	}

	cout << day << "/" << month << "/" << year << " " << hour << ":" << minutes;
}

int main(){
	date("27/11/2018 16:19");
    return 0;
}

