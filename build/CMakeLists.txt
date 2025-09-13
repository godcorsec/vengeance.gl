cmake_minimum_required(VERSION 4.0)
project (vengeance6)

SET(CMAKE_CXX_STANDARD 23)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(vengeance6 
	../src/main.cpp
)


target_include_directories(vengeance6 PRIVATE ${CMAKE_SOURCE_DIR}/../vendor/includes)

target_link_libraries(vengeance6 PRIVATE
	${CMAKE_SOURCE_DIR}/../vendor/lib64/libglfw3.a
	opengl32
)
