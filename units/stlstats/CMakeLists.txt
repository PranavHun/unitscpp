set (SOURCE_FILES basic_stats.cpp basic_stats.hpp randgen.hpp)
add_library(PHstlstats STATIC ${SOURCE_FILES})

install (TARGETS PHstlstats DESTINATION lib)
install (FILES basic_stats.hpp randgen.hpp DESTINATION include)

add_subdirectory(test)
