# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/trevor/zephyrproject/modules/hal/espressif/components/bootloader/subproject"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf/build/bootloader"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf/tmp"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf/src/EspIdfBootloader-stamp"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf/src"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf/src/EspIdfBootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/trevor/Dev/zephyr/tut01/build/esp-idf/src/EspIdfBootloader-stamp/${subDir}")
endforeach()
