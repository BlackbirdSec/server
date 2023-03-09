add_library(BScan
        # hardwares specific definitions
        hwares/computer.cpp
        # softwares specific definitions
        swares/operation_system.cpp
        )

add_library(${PROJECT_NAME}::BScan ALIAS BScan)