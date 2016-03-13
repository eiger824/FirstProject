#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {
  string name;
  if (argc == 1) {
    cout << "No arguments provided. Returning..." << endl;;
    return 0;
  } else {
    for (int i = 1; i < argc; ++i) {
      if (!strcmp(argv[i],"-n") || !strcmp(argv[i],"--name")) {
	name = argv[i+1];
      }
    }
  }

  cout << "Hello " << name << endl;
  return 0;
}
