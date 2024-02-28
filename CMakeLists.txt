cmake_minimum_required(VERSION 3.0.0)
project(ConnectFour VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(ConnectFour main.cpp includes/board/board.cpp includes/game/game.cpp includes/player/player.cpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
