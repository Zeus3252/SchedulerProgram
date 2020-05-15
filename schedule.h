#include <iostream>
#include "CSVReader.h"
#include <string>
#include <algorithm>
#include <string>
#include <limits>

using namespace std;

int menuOption=0;

class Schedule{
	private:
		
	public:
		string day;
		string startTime;
		string endTime;
		string activity;
		string duration;
		void printInfo();
		
Schedule(){
	day="";
	activity="";
	startTime="";
	endTime="";
	duration="";
}

Schedule(string day2, string startTime2, string endTime2, string activity2, string duration2){
	day=day2;
	startTime=startTime2;
	endTime=endTime2;
	activity=activity2;
	duration=duration2;
}
};

struct Time{
	private:
	
	public:
		void optionOne();
		void optionTwo();
		void optionThree();
		void menu();
};


void Time::optionOne(){
	vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
		for(int i=0;i<vec_Schedule.size();i++){
			vec_Schedule[i].printInfo();
		}
		menu();
		if(menuOption == 1){
			optionOne();
		}
		if(menuOption == 2)
			optionTwo();
		if(menuOption == 3)
			optionThree();
			
	}
	
	
	void Time::optionTwo(){
		cin.ignore();
		cout<<"Enter Day of Week as Mon,Tue etc: ";
		string twoDay;
		getline(cin,twoDay);
		transform(twoDay.begin(), twoDay.end(), twoDay.begin(), ::toupper);
		if(twoDay == "MON"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[1].printInfo();
	}
		if(twoDay == "TUE"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[2].printInfo();
			vec_Schedule[3].printInfo();
	
}
	if(twoDay == "WED"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[4].printInfo();
	
}
	if(twoDay == "THUR"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[5].printInfo();
			vec_Schedule[6].printInfo();
	
}

if(twoDay == "FRI"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[7].printInfo();
			}
if(twoDay == "SAT"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[8].printInfo();
			}
if(twoDay == "SUN"){
		
			vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[9].printInfo();
			vec_Schedule[10].printInfo();
			}
		menu();
		if(menuOption == 1){
			optionOne();
		}
		if(menuOption == 2)
			optionTwo();
		if(menuOption == 3)
			optionThree();
			
	
}


void Time::optionThree(){
			string threeActive;
			cout<<"Enter an activity: ";
        	cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
			getline(cin,threeActive);
			transform(threeActive.begin(), threeActive.end(), threeActive.begin(), ::toupper);
		if(threeActive == "GAMING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[1].printInfo();
		}
	if(threeActive == "READING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[2].printInfo();
		}
	if(threeActive == "NAPPING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[3].printInfo();
		}
	if(threeActive == "EXERCISE"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[4].printInfo();
		}
	if(threeActive == "STUDYING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[5].printInfo();
		}
	if(threeActive == "CLEANING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[6].printInfo();
		}
	if(threeActive == "LAUNDRY"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[7].printInfo();
		}
		if(threeActive == "PROGRAMMING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[8].printInfo();
		}
		if(threeActive == "PRAYING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[9].printInfo();
		}
		if(threeActive == "COOKING"){
		vector<Schedule> vec_Schedule;
	CSVReader tmp_csvReader ("schedules.csv", ',');
		for(int i=0; i<tmp_csvReader.getRowsCount();i++){
			Schedule s = Schedule(
			tmp_csvReader.getCellAsString(i,0), 
			tmp_csvReader.getCellAsString(i,1),
			tmp_csvReader.getCellAsString(i,2),
			tmp_csvReader.getCellAsString(i,3),
			tmp_csvReader.getCellAsString(i,4)
			);
			vec_Schedule.push_back(s); 
			}
			vec_Schedule[10].printInfo();
		}
		menu();
		if(menuOption == 1){
			optionOne();
		}
		if(menuOption == 2)
			optionTwo();
		if(menuOption == 3)
			optionThree();
			
	}



void Time::menu(){
	cout<<"***************************************"<<endl<<"Welcome to Jayson's Scheduler         |"<<endl<<"***************************************"; 
	cout<<endl<<"                MENU                  |"<<endl<<"---------------------------------------"<<endl;
    cout<<"Press [1] to see all schedules."<<endl<<"Press [2] to see schedules for a given day."<<endl<<"Press [3] to see schedules for a given activity."<<endl<<"Enter anything else to exit.";
	cin>>menuOption;
}

void Schedule::printInfo(){
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl<<day<<"           "<<startTime<<"           "<<endTime<<"           "<<activity<<"           "<<duration<<endl;
}
