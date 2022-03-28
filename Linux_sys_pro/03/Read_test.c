#include <unistd.h>
#include <stdlib.h>

int main()
{
	char buffer[128];
	int nread;

	nread = read(0,buffer,128); // success the number of bytes read is returned
							    
	if(nread == -1) write(2, "read error\n",11); // read error return -1 
	if(write(1, buffer,nread)) write(2, "write error\n",12); // print buffer on terminal
	
	return 0;
}

