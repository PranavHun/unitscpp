set (SOURCE_FILES date.cpp date.hpp)
add_library(PHdate STATIC ${SOURCE_FILES})

install (TARGETS PHdate DESTINATION lib)
install (FILES date.hpp DESTINATION include)

add_subdirectory(test)
