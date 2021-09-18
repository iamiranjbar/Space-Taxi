#ifndef _CLIENT_SOCKET_H
#define _CLIENT_SOCKET_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "tools.h"
#include "network_exception.h"

#define MAX_BUFFER_SIZE 2048


class ClientSocket {
public:
  static ClientSocket* get_instance();
  void send(std::string message);
  std::string receive();
  void status();
  bool is_login(){return login_status;}
  void set_login_status(bool status){login_status = status;}
  void set_username(std::string _username){login_username = _username;}
  std::string get_login_username(){return login_username;}
  ~ClientSocket();
private:
  void batchsend(std::string message);
  std::string batchreceive(int partcount);
  ClientSocket(std::string address, int port);
  static ClientSocket* instance;
private:
  int sockfd;
  int sentbytes;
  int receivedbytes;
  bool login_status;
  std::string login_username;
};

#endif
