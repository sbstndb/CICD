set(test
	test.cpp
)

add_executable(test ${test})

set_target_properties(test PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(test gtest gtest_main)
