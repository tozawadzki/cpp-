#ifndef MERGE_H_HAS_BEEN_INCLUDED
#define MERGE_H_HAS_BEEN_INCLUDED
#include <iostream>
// Sortowanie przez scalanie
// Złożoność czasowa: O (nlogn)
// Złożoność pamięciowa: O(n)
class Merge
{
public:
	void randomFill(int *tab, int size);
	void reverseFill(int *tab, int size);
	void Display(int *tab, int size);
	void MergeSort( int tablica[], int start, int koniec);
	void MergeIt(int tablica[], int start, int srodek, int koniec);
	Merge() {}
};

#endif 