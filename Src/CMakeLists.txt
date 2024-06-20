cmake_minimum_required (VERSION 3.8)

add_executable (Computer main.cpp "CPU.cpp" ${INC_DIR}/CPU.h ${INC_DIR}/RAM.h ${INC_DIR}/HDD.h ${INC_DIR}/GPU.h ${INC_DIR}/Keyboard.h HDD.cpp "Keyboard.cpp" "GPU.cpp" "RAM.cpp")
target_include_directories(Computer PUBLIC ${INC_DIR})