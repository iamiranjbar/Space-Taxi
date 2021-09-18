#include "server.h"
#include <cstdlib>
using namespace std;
#include "system.hpp"

// 'Server' is an abstract class, so define your own server class inheriting from the 'Server'
class MyServer : public Server {
public:
  MyServer(int port) : Server(port) {}
  void on_standard_input(string line);
  void on_new_connection(int identifier);
  void on_new_message(int identifier, string message);
  void on_terminated_connection(int identifier);
};

void MyServer::on_standard_input(string line)
{
  if (line == ":q")
    stop();
  try{
    line = "admin " + line;
    system->get_command(line);
    system->take_command_apart();
    line = system->check_admin_command();
  }catch (except ex){
      if (ex.get_type() == "command parameters number")
        line = "Parameters number is not correct!";
      if (ex.get_type() == "repeated username")
        line ="This username already has exist!";
      if (ex.get_type() == "repeated tel")
        line ="This phone number already has exist!";
      if (ex.get_type() == "repeated ss number")
        line ="This spaceship number already has exist!";
      if (ex.get_type() == "ss model not exist")
        line ="This model doesn't exist!";
      if (ex.get_type() == "wrong parameter")
        line ="Wrong parameter!";
      if (ex.get_type() == "not login")
        line ="Please login first!";
      if (ex.get_type() == "driver not found")
        line ="This driver doesn't exist!";
      if (ex.get_type() == "accepted")
        line ="This driver accepted previously!";
      if (ex.get_type() == "not signup")
        line ="Please signup first!";
      if (ex.get_type() == "incorrect pass")
        line ="Password was incorrect!";
      if (ex.get_type() == "wrong galaxy")
        line ="This galaxy doesn't exist!";
      if (ex.get_type() == "wrong planet")
        line ="This Planet doesn't exist!";
      if (ex.get_type() == "not accepted")
        line ="Wait for accepting request...";
      if (ex.get_type() == "can't request")
        line ="You have another open request!Please cancel trip or rate...";
      if (ex.get_type() == "lack of money")
        line ="Your credit is low for request!";
      if (ex.get_type() == "no driver found")
        line ="No driver is available!";
      if (ex.get_type() == "passenger not found")
        line ="This passenger doesn't exist!";
      if (ex.get_type() == "no trip for cancel")
        line ="No trip for canceling!";
      if (ex.get_type() == "can't change stat")
        line ="You can't change your status in trip!";
      if (ex.get_type() == "trip not exist")
        line ="This trip doesn't exist!";
      if (ex.get_type() == "all ended")
        line ="All trips has ended!";
      if (ex.get_type() == "wrong rate")
        line ="Rate number should be between 1-10!";
      if (ex.get_type() == "wrong command")
        line ="Wrong command!";
      if (ex.get_type() == "back to the past")
        line ="Please roate clockwise!:D";
      if (ex.get_type() == "wrong time format")
        line ="This time format was wrong!";
    }
  cout << "STDIN: " << line << endl;
}

void MyServer::on_new_connection(int identifier) {
  cout << "NEW CONNECTION: " << identifier << endl;
}

void MyServer::on_new_message(int identifier, string message) {
  cout << "NEW MESSAGE FROM " << identifier <<": " << message << endl;
  try{
    system->get_command(message);
    system->take_command_apart();
    message = system->check_run_command();
  }catch (except ex){
      if (ex.get_type() == "command parameters number")
        message = "Parameters number is not correct!";
      if (ex.get_type() == "repeated username")
        message ="This username already has exist!";
      if (ex.get_type() == "repeated tel")
        message ="This phone number already has exist!";
      if (ex.get_type() == "repeated ss number")
        message ="This spaceship number already has exist!";
      if (ex.get_type() == "ss model not exist")
        message ="This model doesn't exist!";
      if (ex.get_type() == "wrong parameter")
        message ="Wrong parameter!";
      if (ex.get_type() == "not login")
        message ="Please login first!";
      if (ex.get_type() == "driver not found")
        message ="This driver doesn't exist!";
      if (ex.get_type() == "accepted")
        message ="This driver accepted previously!";
      if (ex.get_type() == "not signup")
        message ="Please signup first!";
      if (ex.get_type() == "incorrect pass")
        message ="Password was incorrect!";
      if (ex.get_type() == "wrong galaxy")
        message ="This galaxy doesn't exist!";
      if (ex.get_type() == "wrong planet")
        message ="This Planet doesn't exist!";
      if (ex.get_type() == "not accepted")
        message ="Wait for accepting request...";
      if (ex.get_type() == "can't request")
        message ="You have another open request!";
      if (ex.get_type() == "lack of money")
        message ="Your credit is low for request!";
      if (ex.get_type() == "no driver found")
        message ="No driver is available!";
      if (ex.get_type() == "passenger not found")
        message ="This passenger doesn't exist!";
      if (ex.get_type() == "no trip for cancel")
        message ="No trip for canceling!";
      if (ex.get_type() == "can't change stat")
        message ="You can't change your status in trip!";
      if (ex.get_type() == "trip not exist")
        message ="This trip doesn't exist!";
      if (ex.get_type() == "all ended")
        message ="All trips has ended!";
      if (ex.get_type() == "wrong rate")
        message ="Rate number should be between 1-10!";
      if (ex.get_type() == "wrong command")
        message ="Wrong command!";
      if (ex.get_type() == "back to the past")
        message ="Please roate clockwise!:D";
      if (ex.get_type() == "wrong time format")
        message ="This time format was wrong!";
    }
  send(identifier, message);
}

void MyServer::on_terminated_connection(int identifier) {
  cout << "TERMINATED CONNECTION: " << identifier << endl;
}


int main(int argc, char* argv[]) {
  if (argc != 2) {
    cerr << "valid operation: " << argv[0] << " [port number]\n";
    exit(-1);
  }

  MyServer server(Tools::mystoi(argv[1]));
  server.run();

  return 0;
}
