cmake_minimum_required(VERSION 3.9)
project(app) 
add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.c)
add_compile_options(-Wall -Wextra -std=c2x)

set(EXERCISES_PATH "exercises")
set(CHAPTERS
    001_START_HERE
    002_stdio
    003_variables
    004_loops
    005_constants
    006_bit_widths
    007_getchar
    008_getlines
    009_bonus_emoji
    010_logical_operators
    011_type_conversions
    012_type_casting
    013_arithmetic
    014_bitwise_operators
)

foreach(_chapter ${CHAPTERS})
    add_executable(${_chapter} ${EXERCISES_PATH}/${_chapter}.c)
endforeach()
