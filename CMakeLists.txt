cmake_minimum_required(VERSION 3.26)
project(learn_c__)

set(CMAKE_CXX_STANDARD 20)

#add_executable(learn_c__ "Chapter 1/hello_world.cpp"
#)
#add_executable(init "Chapter 1/diff_init.cpp")
#add_executable(input "Chapter 1/getting_input.cpp")
#add_executable(times_two "Chapter 1/times_two.cpp")
#add_executable(chpt1 "Chapter 1/chpt1.cpp")
add_executable(func func_intro.cpp)
add_executable(funcparam func_param.cpp)
add_executable(forward forward_dec.cpp
        add.cpp
        input.cpp)
add_executable(preprocessor preprocessor.cpp)
