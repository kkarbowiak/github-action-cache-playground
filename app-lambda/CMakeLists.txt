cmake_minimum_required(VERSION 3.15)

find_package(aws-lambda-runtime)

add_executable(app-lambda
    main.cpp)

target_compile_options(app-lambda PRIVATE
    -Wall -Wextra -Werror -pedantic-errors)

target_link_libraries(app-lambda PRIVATE
    AWS::aws-lambda-runtime)

aws_lambda_package_target(app-lambda)
