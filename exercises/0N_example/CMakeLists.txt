cmake_minimum_required(VERSION 3.9)
project(0N_example) 
add_executable(${PROJECT_NAME} src/app.c)
# No MSVC support, C is for Unix ;) (aka, use WSL!)
add_compile_options(-Wall -Wextra -pedantic -Werror -std=c2x)

include(CTest)
add_executable(test_${PROJECT_NAME} test/test_app.c)
add_test(NAME test_${PROJECT_NAME}
         COMMAND test_${PROJECT_NAME})
