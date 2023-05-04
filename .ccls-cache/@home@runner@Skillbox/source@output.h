#ifndef OUTPUT_H 
#define OUTPUT_H 1

#include<string>

void output(const char grid[3][3]);
bool check_string(const std::string& str, const size_t correct_size,
		const std::string& correct_char_set);
std::string input_grid_lines();

#endif