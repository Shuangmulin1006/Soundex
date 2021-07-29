cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(chapterFirstExample VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(test SoundexTest.cpp Soundex.cpp)

list(APPEND EXTRA_LIBS gtest gmock pthread)

target_link_libraries(test PUBLIC ${EXTRA_LIBS})

# target_link_libraries(test gtest)
# target_link_libraries(test gmock)
# target_link_libraries(test pthread)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(test PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )