cmake_minimum_required(VERSION 3.9)
project(exercise01) 
add_executable(${PROJECT_NAME} src/main.c)

# Libraries to include for linking
# target_link_libraries(${PROJECT_NAME} -l<some_library>)

include(CTest)
add_executable(test_${PROJECT_NAME} test/test_main.c)
add_test(NAME test_${PROJECT_NAME}
         COMMAND test_${PROJECT_NAME})

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
