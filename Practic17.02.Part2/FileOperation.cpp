#include "FileOperation.h"
void FileOperation::Save(int x, int y, int z) {
	fprintf_s(f, "x = %d, y = %d, z = %d", &x, &y, &z);
}
void FileOperation::Load(int& x, int& y, int& z) {
	while (!feof(f))
	{
		fscanf_s(f, "%d%d%d", &x, &y, &z);
		printf("x = %d, y = %d, z = %d", x, y, z);
	}
}