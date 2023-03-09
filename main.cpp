#include <iostream> 
#include "hwinfo/hwinfo.h"
#include "hwares/hwares.h"

int main() { 
  hwinfo::CPU cpu;
  bscan::COMPUTER pc;
	std::cout << "Welcome To BalckBird 1.0-beta" << std::endl;

  std::cout << cpu.vendor() << std::endl;
  std::cout << pc.cpu() << std::endl;
}