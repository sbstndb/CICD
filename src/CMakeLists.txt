set(
	src
	main.cpp
)


add_executable(CICD ${src})

set_target_properties(CICD PROPERTIES CUDA_SEPARABLE_COMPILATION ON)

target_link_libraries(CICD PRIVATE ${HDF5_LIBRARIES})

