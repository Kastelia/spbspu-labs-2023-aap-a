#ifndef FILE_OPERATION_H
#define FILE_OPERATION_H
#include <fstream>
#include <cstddef>

namespace zakozhurnikova
{
  int rightArguments(int argc, char** argv);
  void createMatrix(int **&matrix, int rows, int cols);
  void freeMatrix(int **&matrix, int rows);
}

#endif