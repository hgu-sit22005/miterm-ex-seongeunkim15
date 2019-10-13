#include <iostream>
#include <cstring>
#include <stdlib.h>

int main(int argc, char** argv)
{ 
	char buff[1000];
    std::cout << "Enter a string " << std::endl;
    std::cout << ">>";
    std::cin >> buff;
    
    char buff2[101];
	int idx = 0;

	for(int i = 0; i < strlen(buff); i++)
	{
		if(buff[i] != 'a')
			if(buff[i] != 'A')
				if(buff[i] != 'e')
					if(buff[i] != 'E')
						if(buff[i] != 'i')
							if(buff[i] != 'I')
								if(buff[i] != 'o')
									if(buff[i] != 'O')
										if(buff[i] != 'u')
											if(buff[i] != 'U')
											{
												buff2[idx] = buff[i];
												idx += 1;
											}

	}
	buff2[idx] = '\0';
	std::cout << buff2 << std::endl;










    return 0;
}