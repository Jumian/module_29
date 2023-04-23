
set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/include)

add_executable("Skillbox_cpp_29_2" "Skillbox_cpp_29_2.cpp" "Shape.cpp" "Triangle.cpp" "Square.cpp"  "Circle.cpp")

target_include_directories("Skillbox_cpp_29_2" PUBLIC ${MY_INCLUDE})