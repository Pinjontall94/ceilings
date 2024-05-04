cmake_minimum_required(VERSION 3.9)
project(ceilings) 
add_executable(${PROJECT_NAME} src/main.c)

# Libraries to include for linking
target_link_libraries(${PROJECT_NAME} -lconvert)
include_directories(/usr/local/include)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
