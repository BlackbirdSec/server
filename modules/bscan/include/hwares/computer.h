
#include <string>
#pragma once


namespace bscan {

  class COMPUTER {
    public:
      COMPUTER() = default;
      ~COMPUTER() = default;

      std::string& cpu();

      static std::string getCPU();
    
    private:
      std::string _cpu;
      

  }
}

// std::string getCPU();
