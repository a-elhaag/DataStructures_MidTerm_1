#pragma once
#include<iostream>
using namespace std;
class Student
{
private:
	string name;
	int roll_no;
public:
	Student(string name, int roll_no);
	void set_name(string name);
	void set_roll_no(int roll_no);
	string get_name();
	int get_roll_no();

};

