#include <stdio.h>
#include <stdlib.h>
#include <vector>

char* read_file(char *file_path)
{
	FILE *f = fopen(file_path, "rb");
	fseek(f, 0, SEEK_END);
	long fsize = ftell(f);
	fseek(f, 0, SEEK_SET);

	char *f_str = malloc(fsize + 1);
	fread(f_str, fsize, 1, f);
	fclose(f);
	f_str[fsize] = 0;
	return f_str;
}

void format_input(cont char *input_str, vector<int> &vec)
{
	
}

int main() {
	char *input_str = read_file("input.txt");
	return 0;
}
