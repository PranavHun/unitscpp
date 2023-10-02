add_executable(test_stlstats test_stlstats.cpp)
target_link_libraries(test_stlstats PUBLIC PHstlstats)
add_test(check_stl_stats test_stlstats)

