#include <iostream>
#include <string>
#include "hwinfo/hwinfo.h"
#include "hwares/computer.h"

namespace bscan {

  std::string& COMPUTER::cpu() {
    if (_cpu.empty()) {
      _cpu = std::move(getCPU());
    }
    return _cpu;
  };
  
}