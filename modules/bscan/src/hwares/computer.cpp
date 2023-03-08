#include <iostream>
#include <string>
#include "hwinfo/hwinfo.h"
#include "bscan/hwares/computer.h"

namespace bscan {

  std::string& COMPUTER::cpu() {
    return "OK:";
  }
}