set (SOURCE_FILES csv.cpp csv.hpp)
add_library(PHcsv STATIC ${SOURCE_FILES})

install (TARGETS PHcsv DESTINATION lib)
install (FILES csv.hpp DESTINATION include)
add_subdirectory(test)
