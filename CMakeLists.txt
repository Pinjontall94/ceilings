cmake_minimum_required(VERSION 3.9)
project(app) 
add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.c)
add_compile_options(-Wall -Wextra -std=c2x)

set(EXERCISES_PATH "exercises")
set(TEST_PATH "test")
set(CHAPTERS
    01_EDIT_TO_START
    0N_example)

include(CTest)
foreach(_chapter ${CHAPTERS})
    add_executable(${_chapter} ${EXERCISES_PATH}/${_chapter}.c)
    add_executable(${_chapter}_test ${TEST_PATH}/${_chapter}_test.c)
    add_test(NAME ${_chapter} 
             COMMAND ${_chapter}_test)
endforeach()
