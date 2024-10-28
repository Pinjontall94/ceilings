cmake_minimum_required(VERSION 3.9)
project(app) 
add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.c)
add_compile_options(-Wall -Wextra -std=c2x)

set(EXERCISES_PATH "exercises")
set(CHAPTERS
    001_START_HERE
    002_stdio
    003_assignment
    004_arrays
    00N_example)

foreach(_chapter ${CHAPTERS})
    add_executable(${_chapter} ${EXERCISES_PATH}/${_chapter}.c)
endforeach()
