#include "Node.h"


void Node::makeNode(int record, int id, string name, string email, string units, string program, string level)
{
	listNode *newNode; //point to a new node
	listNode *nodePtr; // move through list

	//allocate a new node and store values there
	newNode = new listNode;

	newNode->mRecordNumber;
	newNode->mIDnumber;
	newNode->mName;
	newNode->mEmail;
	newNode->mUnits;
	newNode->mProgram;
	newNode->mLevel;
	newNode->mNumAbsences;
	newNode->mDateAbsences;

	newNode->pNext = NULL;

	//If there are no nodes in the list make newNode the first node
	if (pHead == NULL)
	{
		pHead = newNode;
	}
	else //otherwise, insert newNode at start.
	{
		newNode->pNext = pHead;
		pHead = newNode;
	}
}

int Node::getRecordNumber()
{
	return 0;
}

int Node::getIDNumber()
{
	return 0;
}

string Node::getName()
{
	return string();
}

string Node::getEmail()
{
	return string();
}

string Node::getUnits()
{
	return string();
}

string Node::getProgram()
{
	return mProgram();
}

string Node::getLevel()
{
	return string();
}

int Node::getNumAbsences()
{
	return 0;
}

int Node::getDateAbsences()
{
	return mDateAbsences;
}

