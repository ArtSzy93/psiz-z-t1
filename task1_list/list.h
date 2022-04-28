#pragma once \\Directive which ensures the file is only included once within a single compilation
#ifndef LIST_H
#define LIST_H

typedef struct List {
	char* pPlateNum;
	time_t entryTime;
	struct List* pNext;
} List;

List*initList(void);
void deinitList(List* pRoot);
void addCar(List* pRoot, char* plateNum);
void removeCar(List* pRoot, char* plateNum);
void printAll(List* pRoot);
int numberOfElements(List* pRoot);

#endif // !LIST_H
