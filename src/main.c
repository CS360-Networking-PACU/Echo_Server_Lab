//***************************************************************************
// File name:		Echo_Server_Lab.c
// Author:			chadd williams
// Date:				September 10, 2018
// Class:				CS 360
// Assignment:	In Class Echo_Server_Lab
// Purpose:			Practice using TCP server sockets
//***************************************************************************
#define _GNU_SOURCE

#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


/****************************************************************************
 Function:		main
 
 Description:	Act as an echo server
 
 Parameters:	int argc: number of command line arguments
							char **argv: the command line arguments
 
 Returned:		EXIT_SUCCESS
****************************************************************************/
int main(int argc, char **argv)
{

		int socketfd, connSocket;
		int result;
		char pBuf[1024];

		
		////
		struct sockaddr_in sAddr, sConnAddr;
		
		
		// create an AF_INET Stream socket.
			
			
		// make sure the socket was created.
		// otherwise, exit with an error message.


		// set up the socket family and port in the address
		sAddr.sin_family = AF_INET;
		sAddr.sin_port = ;
	
	
		// bind


		// listen with backlog of 10


		// loop forever

			// accept a connection


			// receive data

			// send data back
			
			// close the accepted socket

		// close the original socket
		return EXIT_SUCCESS;
}

