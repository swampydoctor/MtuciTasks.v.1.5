add_library (Laba7.2_lib STATIC "")

target_include_directories (Laba7.2_lib PUBLIC "../Includes")

target_sources (Laba7.2_lib PRIVATE "readArray.c" "sort.c" "sortHeapArray.c" "writeArray.c")