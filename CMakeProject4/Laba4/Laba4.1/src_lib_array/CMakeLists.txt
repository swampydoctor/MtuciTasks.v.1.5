add_library (Laba4lib2 STATIC "")

target_include_directories (Laba4lib2 PUBLIC "../Includes")

target_sources (Laba4lib2 PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortStackArray.c")