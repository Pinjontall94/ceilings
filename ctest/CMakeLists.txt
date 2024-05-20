cmake_minimum_required(VERSION 3.9)
project(app) 
add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.c)

set(CHAPTERS
    01)

include(CTest)
foreach(chapter ${CHAPTERS})
    add_subdirectory(exercises/${chapter})
    add_test(NAME ${PROJECT_NAME}
             COMMAND "${PROJECT_NAME} exercises/${chapter}/test_exercise${chapter}")
endforeach()

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
