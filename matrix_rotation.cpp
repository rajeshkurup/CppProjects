#include <iostream>

using namespace std;

int min(int m, int n)
{
	return (m > n ? n : m);
}

void cleanup(int** a, int** b, int rows)
{
	for(int i = 0; i < rows; ++i)
	{
		delete[] a[i];
		delete[] b[i];
	}
	
	delete[] a;
	delete[] b;
}

int main() 
{
	int num_row = 0;
	int num_col = 0;
	int num_rot = 0;
	cin >> num_row >> num_col >> num_rot;
	
	// check input constraints
	if(num_row < 2 || num_row > 300 || num_col < 2 || num_col > 300)
	{
		return 0;
	}
	
	if(num_rot < 1 || num_rot > 1000000000)
	{
		return 0;
	}
	
	if(min(num_row, num_col) % 2 != 0)
	{
		return 0;
	}
	
	// allocate space for matrix and temp
	int** matrix = new int*[num_row];
	int** matrix_temp = new int*[num_row];
	for(int i = 0; i < num_row; ++i)
	{
		matrix[i] = new int[num_col];
		matrix_temp[i] = new int[num_col];
	}
	
	// fill matrix
	for(int i = 0; i < num_row; ++i)
	{
		for(int j = 0; j < num_col; ++j)
		{
			int num = 0;
			cin >> num;
			
			// check input constraints
			if(num < 1 || num > 100000000)
			{
				cleanup(matrix, matrix_temp, num_row);
				return 0;
			}
			
			matrix[i][j] = num;
		}
	}
	
	// start rotation
	for(int j = 0; j < num_rot; ++j)
	{
		int idx_row = 1;
		int idx_col = 0;	
		int count = min(num_row, num_col) / 2;
		int row_count = num_row;
		int col_count = num_col;
		int start_row = 0;
		int start_col = 0;
	
		for(int i = 0; i < count; ++i)
		{
			for( ; idx_row < row_count; ++idx_row)
			{
				matrix_temp[idx_row][idx_col] = matrix[idx_row-1][idx_col];
			}
	
			++idx_col;
			--idx_row;
	
			for( ; idx_col < col_count; ++idx_col)
			{
				matrix_temp[idx_row][idx_col] = matrix[idx_row][idx_col-1];
			}
	
			--idx_col;
			--idx_row;
	
			for( ; idx_row >= start_row; --idx_row)
			{
				matrix_temp[idx_row][idx_col] = matrix[idx_row+1][idx_col];
			}
	
			--idx_col;
			++idx_row;
	
			for( ; idx_col >= start_col; --idx_col)
			{
				matrix_temp[idx_row][idx_col] = matrix[idx_row][idx_col+1];
			}
		
			idx_col += 2;
			idx_row += 2;
			--row_count;
			--col_count;
			++start_row;
			++start_col;
		}
		
		//copy temp to original
		int** temp = matrix;
		matrix = matrix_temp;
		matrix_temp = temp;
	}
	
	// print final matrix
	for(int i = 0; i < num_row; ++i)
	{
		for(int j = 0; j < num_col; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		
		cout << endl;
	}
	
	//cleanup
	cleanup(matrix, matrix_temp, num_row);
	
	return 0;
}
