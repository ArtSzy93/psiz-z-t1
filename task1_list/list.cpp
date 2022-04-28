#include "pch.h"
#include "list.h"
using namespace std;


List* initList(void)
	// Function to check free memory
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	if(pRoot != NULL) 
	{
		pRoot->pNext = NULL;
		cout << "Operacja zakończona sukcesem. Pamięć zalokowana. " << endl;
	} else if (pRoot == NULL) {
		cout << "Brak miejsca w pamięci." << endl;
	} else {
		cout << "Nieznany błąd." << endl;
	}
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	if(NULL != pRoot)
	{
	 free(pRoot);
	 pRoot = NULL;
	}
}

void addCar(List* pRoot, char* plateNum)
{
	plateNum = pRoot;
}

//function car removal
void removeCar(List* pRoot, char* plateNum)
{

} // Function to Printall List 
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
