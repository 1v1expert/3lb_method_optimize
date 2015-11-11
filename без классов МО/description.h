#pragma once
#include <iostream>
#include <string>


void Print(char *file_name);
void swap(int r, int k, double **data, int *free, int *depended, int m, int n);
void Solve(double **data, int *free, int *depended, int m, int n, Ntree *&tree);
void atree(double **data, int *free, int *depended, int m, int n, Ntree *&tree);
