#include <iostream> 
#include "hwinfo/hwinfo.h"

int main() { 
  hwinfo::CPU cpu;
	std::cout << "Welcome To BalckBird 1.0-beta" << std::endl;

  std::cout << cpu.vendor() << std::endl;
}