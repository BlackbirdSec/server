#include <iostream>
#include <string>
#include "hwinfo/hwinfo.h"
#include "hwares/computer.h"

namespace bscan {

  std::string& COMPUTER::cpu() {
    
     _cpu = std::string("CPU info test");
    
    return _cpu;
  };

}