/**************************************************************************
* Filename : server.c
* Author : Chang Soo Kim <soochang0812@gmail.com>
* description : Socket Server
**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

int main(int argc, char** argv[])
{
  int server_socket;
  int clinet_socket;
  int client_addr_size;
  
  struct sockaddr_in server_addr;
  struct sockaddr_in client_addr;
  
  char buff_rcv[1024];
  char abuff_snd[1024];
  

   server_socket  = socket( PF_INET, SOCK_STREAM, 0);
   if( -1 == server_socket)
   {
      printf( "server socket 생성 실패\n");
      exit( 1);
   }
  
}
