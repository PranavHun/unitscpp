find_library(isPHcsv NAMES PHcsv HINTS ${CMAKE_INSTALL_PREFIX}/lib)

if(isPHcsv)
        message(STATUS "PHcsv found")
else(isPHcsv)
        message(FATAL_ERROR "PHcsv not found")
endif(isPHcsv)

add_executable(example_PHcsv example_csv.cpp)
target_link_libraries (example_PHcsv PUBLIC ${isPHcsv})

install (TARGETS example_PHcsv DESTINATION bin/csv)

