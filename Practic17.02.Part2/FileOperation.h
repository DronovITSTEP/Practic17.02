#pragma once
#include <iostream>
using namespace std;

class FileOperation
{
	char path[20];
	FILE* f;
public:
	FileOperation(const char* p) {
		strcpy_s(path, p);
	}
	~FileOperation() {
		if (f) fclose(f);
		cout << "Destructor\n";
	}

	void Save(int, int, int);
	void Load(/*int&, int&, int&*/);
};

