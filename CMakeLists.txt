cmake_minimum_required(VERSION 3.12)
project(main)

set(CMAKE_CXX_STANDARD 20)

add_compile_options(-Wall -Wextra -pedantic -Werror -fPIC)
add_executable(main main.cpp A.cpp)

