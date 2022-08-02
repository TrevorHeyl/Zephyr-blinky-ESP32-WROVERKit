# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/trevor/zephyrproject/modules/hal/espressif/components/partition_table"
  "/home/trevor/Dev/zephyr/tut01/build/esp-idf/build"
  "/home/trevor/Dev/zephyr/tut01/build/zephyr/soc/xtensa/esp32/EspPartitionTable-prefix"
  "/home/trevor/Dev/zephyr/tut01/build/zephyr/soc/xtensa/esp32/EspPartitionTable-prefix/tmp"
  "/home/trevor/Dev/zephyr/tut01/build/zephyr/soc/xtensa/esp32/EspPartitionTable-prefix/src/EspPartitionTable-stamp"
  "/home/trevor/Dev/zephyr/tut01/build/zephyr/soc/xtensa/esp32/EspPartitionTable-prefix/src"
  "/home/trevor/Dev/zephyr/tut01/build/zephyr/soc/xtensa/esp32/EspPartitionTable-prefix/src/EspPartitionTable-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/trevor/Dev/zephyr/tut01/build/zephyr/soc/xtensa/esp32/EspPartitionTable-prefix/src/EspPartitionTable-stamp/${subDir}")
endforeach()
