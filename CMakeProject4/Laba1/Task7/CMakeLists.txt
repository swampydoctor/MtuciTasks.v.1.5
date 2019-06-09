

# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task7 "") 
target_sources(Task7 PRIVATE "Task7_main.c")
target_sources(Task7 PRIVATE "Task7_func.c")
target_include_directories(Task7 PRIVATE "func.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
