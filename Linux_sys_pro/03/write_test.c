#include <unistd.h>
#include <stdlib.h>

int main()
{
	if ((write(1, "hello world\n",10)) != 12) { // success return the number of bytes 
		write(2, "ERROR\n",6);	      			// error return -1
	}  

	exit(0);

//	return 0;
}


