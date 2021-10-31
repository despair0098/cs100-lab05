CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
    MockClasses.hpp
    unit_test.cpp
    Sub.hpp
    Add.hpp
    Mult.hpp
    Div.hpp
    Pow.hpp
)

ADD_EXECUTABLE(lab
	main.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
