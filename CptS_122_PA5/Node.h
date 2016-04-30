#pragma once

#include "menu.h"
#include <array>

class Node
{

public:

	//contstructor
	Node()
	{ pHead = NULL; }

	//copy constructor???
	

	//destructor
	~Node();

	//List Operations
	void makeNode(int, int, string, string, string, string, string);

	int getRecordNumber();
	int getIDNumber();
	string getName();
	string getEmail();
	string getUnits();
	string getProgram();
	string getLevel();
	int getNumAbsences();
	int getDateAbsences();

	void setRecordNumber();
	void setIDNumber();
	void setName();
	void setEmail();
	void setUnits();
	void setProgram();
	void setLevel();
	void setNumAbsences();
	void setDateAbsences();



private:
	/*
	int mRecordNumber;
	int mIDnumber;
	string mName; //last, first
	string mEmail;
	string mUnits; // # of credits for class or audit
	string mProgram; //major
	string mLevel;
	*/

	//declare a struct for list
	typedef struct listNode
	{
		int mRecordNumber;
		int mIDnumber;
		string mName; //last, first
		string mEmail;
		string mUnits; // # of credits for class or audit
		string mProgram; //major
		string mLevel;
		int mNumAbsences;
		int mDateAbsences[10];

		struct listNode *pNext;

	}listNode;

	listNode *pHead;

};