add_library(Laba5lib STATIC "")
target_include_directories(Laba5lib PUBLIC "../Includes")
target_sources(Laba5lib PRIVATE "strlen.c" "find.c" "delete.c" "strcpy.c" "strcat.c" "insert.c")