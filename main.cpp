#include <iostream>
#include <vector>
#include "schedule.h"
#include "CSVReader.h"
#include <algorithm> 
#include <stdlib.h>
#include <string>
#include <limits>
#include <algorithm>

/*
<projectname="Scheduler Program" />
Purpose: This program displays a schedule when the user inputs 1. The user can search for entries by Day (inputs 2) or Activity (inputs 3).
*/

using namespace std;

int main(int argc, char** argv) {
	cout<<"***************************************"<<endl<<"Welcome to Jayson's Scheduler         |"<<endl<<"***************************************"; 
	cout<<endl<<"                MENU                  |"<<endl<<"---------------------------------------"<<endl;
    cout<<"Press [1] to see all schedules."<<endl<<"Press [2] to see schedules for a given day."<<endl<<"Press [3] to see schedules for a given activity."<<endl<<"Enter anything else to exit.";
	int menuOption;
	cin>>menuOption;
	Time myObj;
	if(menuOption == 1){
		myObj.optionOne();
	}
	if(menuOption == 2){
		myObj.optionTwo();
	}
	if(menuOption == 3){
		myObj.optionThree();
	}else{
		exit(0);
	}
	return 0;
}
