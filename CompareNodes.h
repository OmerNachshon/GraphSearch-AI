#pragma once
#include "Node.h"
class CompareNodes
{
public:
	CompareNodes();
	~CompareNodes();

	//bool operator()(Node* pn1, Node* pn2) {	// for uc search
	//	return pn1->getG() > pn2->getG();		// [best first search and a star search] will not be working because CompareNodes uses h  now!
	//}

	//bool operator()(Node* pn1, Node* pn2) {	// for best first search
	//	return pn1->getH() > pn2->getH();		// [uc search and a star search] will not be working because CompareNodes uses h  now!
	//}
	

	bool operator()(Node* pn1, Node* pn2) {	// for a star search
		return pn1->getF() > pn2->getF();		// [uc search and best first search] will not be working because CompareNodes uses f  now!
	}
};

