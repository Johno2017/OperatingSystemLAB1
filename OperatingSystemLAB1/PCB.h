#pragma once

#ifndef PCB_H
#define PCB_H

#include "PageTable.h"

using namespace std;

class PCB
{
	public:
		PCB();
		~PCB();
		PCB(int inPID);
		int getPID() const;
		int getSize() const;
		void printPageTable();
		void setPageTable(PageTable* inPT);
		PageTable* getPageTable();
		void setNext(PCB* inPCB);
		PCB* getNext() const;



	private:
		int PID;
		int size;
		PageTable* pageTable;
		PCB* previous;
		PCB* next;
};

#endif