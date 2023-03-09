#include <iostream>
#include <string>
#include "device.h"
#include "hwinfo/hwinfo.h"
// #include "bscan/swares/operation_system.h"


std::string getOS() {
  hwinfo::OS os;

  return "Nome: %s \nModelo: %s\nVersão: %s\nKernel: %s\n", (os.fullName(), os.name(), os.version(), os.kernel());
}