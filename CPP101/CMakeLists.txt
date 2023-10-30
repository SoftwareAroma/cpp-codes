cmake_minimum_required(VERSION 3.23)
project(CPP101)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP101 main.cpp core/while_loop.cpp core/conditions.cpp core/do_while_loop.cpp core/for_loop.cpp core/multiplication_table.cpp core/rectangle.cpp core/triangles.cpp functions/void_functions_triangle.cpp functions/argumments.cpp functions/return_type.cpp functions/overload.cpp functions/recursion.cpp functions/generic_function.cpp functions/lambda_function.cpp pointers/pointers.cpp pointers/void_pointers.cpp pointers/access_array_members.cpp pointers/return_multiple_values_from_function.cpp pointers/dynamic_array.cpp pointers/multidimentional_dynamic_arrays.cpp pointers/smart_pointers.cpp pointers/function_pointers.cpp oop/classes.cpp oop/constructors.cpp oop/encapsulation.cpp oop/inheritance.cpp oop/polymorphism.cpp oop/virtual_function.cpp oop/virtual_function_pure_relationship.cpp oop/abstraction.cpp others/operator_overload.cpp others/friend_functions.cpp DataStructures/arrays.cpp DataStructures/linked_list.cpp)
