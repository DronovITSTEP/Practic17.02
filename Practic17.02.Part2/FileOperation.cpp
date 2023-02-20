#include "FileOperation.h"
void FileOperation::Save(int x, int y, int z) {
	if (!fopen_s(&f, path, "w"))
		fprintf_s(f, "%d %d %d", x, y, z);
	fclose(f);
}
void FileOperation::Load(/*int& x, int& y, int& z*/) {
	int x, y, z;
	if (!fopen_s(&f, path, "r"))
		while (!feof(f))
		{
			fscanf_s(f, "%d%d%d", & x, & y, & z);
			printf("x = %d, y = %d, z = %d", x, y, z);
		}
	fclose(f);
}