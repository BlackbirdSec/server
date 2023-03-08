#include <iostream> 
#include "hardware/hwinfo.h"

int main() { 
  hardware::CPU cpu;
	std::cout << "Welcome To BalckBird 1.0-beta" << std::endl;

  std::cout << cpu.vendor() << std::endl;
}