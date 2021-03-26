#pragma once

#include <iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node(int d = 0, Node* n = NULL)
	{
		data = d;
		next = n;
	}
};