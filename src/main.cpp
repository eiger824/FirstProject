#include <iostream>
#include <cstdlib>
#include <string.h>
#include "../include/MyObject.hpp"

using namespace std;

bool evalPasswd() {
  string real = "AaBbCcDdEe";
  string typed;
  int attempts = 3;
  do {
    cout << "PASSWORD: ";
    getline (std::cin, typed);
    
    if (real != typed) {
      attempts--;
      if (attempts == 0) return false;
      else cout << "WRONG PASSWORD. Remaining attempts: " << attempts << endl;
    } else return true;
  } while (attempts > 0);
}

int main(int argc, char* argv[]) {
  string name, surname, email;
  short age;
  MyObject *obj = new MyObject();
  if (argc == 1) {
    cout << "No arguments provided. Querying password..." << endl;
    if (evalPasswd() == true) {
      cout << "Welcome" << endl;
    } else {
      cout << "WRONG PASSWORD. Remaining attempts: 0. Returning..." << endl;
      return 0;
    }
  } else {
    if (evalPasswd() == true) {
      cout << "Welcome" << endl;
    } else {
      cout << "WRONG PASSWORD. Remaining attempts: 0. Returning..." << endl;
      return 0;
    }
    for (int i = 1; i < argc; ++i) {
      if (!strcmp(argv[i],"-n") || !strcmp(argv[i],"--name")) {
	name = argv[i+1];
	obj->setName(name);
      } else if (!strcmp(argv[i], "-s") || !strcmp(argv[i], "--surname")) {
	surname = argv[i+1];
	obj->setSurname(surname);
      } else if (!strcmp(argv[i], "-a") || !strcmp(argv[i], "--age")) {
	age = atoi(argv[i+1]);
	obj->setAge(age);
      } else if (!strcmp(argv[i], "-e") || !strcmp(argv[i], "--email")) {
	email = argv[i+1];
	obj->setEmail(email);
      }
    }
  }

  
  return 0;
}
