cmake_minimum_required(VERSION 3.10)
project(C2_Practice_1_DBMS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Находим все наши исходные файлы в папке src и ее подпапках
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Создаем исполняемый файл с именем проекта из наших исходников
add_executable(${PROJECT_NAME} ${SOURCES})