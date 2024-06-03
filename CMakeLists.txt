cmake_minimum_required(VERSION 3.9)
project(app) 
add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.c)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -std=c2x)
endif()

set(EXERCISES_PATH "exercises")
set(CHAPTERS
    0N_example)

include(CTest)
foreach(chapter ${CHAPTERS})
    add_subdirectory(${EXERCISES_PATH}/${chapter})
endforeach()

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
