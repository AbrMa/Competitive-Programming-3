#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int a = 0;
	while(getline(cin,str))
	{
		for(int i = 0; i < str.length(); i++)
		{
			if((str[i] == '"') && (a == 0))	
			{
				a ++;
				a %= 2;
				printf("``");
			}

			else if((str[i] == '"') && (a == 1))	
			{
				a ++;
				a %= 2;
				printf("''");
			}
			
			else
				printf("%c", str[i]);
		}
		
		printf("\n");
	}
	return 0;
}
