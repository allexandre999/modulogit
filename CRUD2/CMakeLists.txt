cmake_minimum_required(VERSION 3.19)
project(CRUD2 C)

set(CMAKE_C_STANDARD 99)

add_executable(CRUD2 main.c funcionario.c funcionario.h dependente.c dependente.h)