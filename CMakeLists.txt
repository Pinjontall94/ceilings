cmake_minimum_required(VERSION 3.9)
project(app) 
add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.c)

set(EXERCISES_PATH "exercises")
set(CHAPTERS
    01)

include(CTest)
foreach(chapter ${CHAPTERS})
    add_subdirectory(${EXERCISES_PATH}/${chapter})
endforeach()

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
