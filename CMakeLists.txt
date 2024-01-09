cmake_minimum_required(VERSION 3.16)

project(
  qsavetex
  VERSION 0.1.0
  LANGUAGES CXX
)

add_executable(
  qsavetex main.cc im_tex.cc pakfile.cc u_file.cc u_util.cc
)
target_compile_features(qsavetex PRIVATE cxx_std_17)

# Copies executables to local install directory after build
add_custom_command(
  TARGET qsavetex
  POST_BUILD
  COMMAND "${CMAKE_COMMAND}" -E copy "$<TARGET_FILE:qsavetex>"
          "${CMAKE_CURRENT_LIST_DIR}"
)