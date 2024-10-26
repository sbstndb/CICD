set(test
	tested.cpp
)

add_executable(tested ${test})

set_target_properties(tested PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(tested gtest gtest_main)

add_test(NAME AddTest COMMAND tested)

