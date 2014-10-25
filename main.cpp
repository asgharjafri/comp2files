#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc,char *argv[])
{
	if (argc != 3) {
	        printf("%i Usage: %s filename1 filename2 parm1 = %s, parm2 = % s\n",argc,argv[0],argv[1],argv[2]);
	        return 1;
	      }
	string firstfile = argv[1], secondfile = argv[2];

  fstream file1(firstfile.c_str()), file2(secondfile.c_str());

#  	char string1[256], string2[256];
    string instr1, instr2
	int j; j = 0;

	while(!file1.eof())
	{
#		file1.getline(string1,256);
#		file2.getline(string2,256);
        file1 >> instr1;
        file2 >> instr2;
		j++;
		printf("Comparing record %i %s\n",j,string1);
		if(strcmp(string1,string2) != 0)
		{
			cout << j << "- strings are not equal" << "\n";
			cout << "   " << string1 << "\n";
			cout << "   " << string2 << "\n";
		}
	}
	printf("End of File. %i records compared.\n",j);
        return 0;
}

