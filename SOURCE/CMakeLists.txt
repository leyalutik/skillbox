project(Computer  VERSION 1.2 )

set(CMAKE_CXX_STANDARD 17)

set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/INCLUDE)



add_library(lib_devices
    computer.cpp
    ram.cpp
    keyboard.cpp
    graphic_card.cpp
    central_processor.cpp
    hard_drive.cpp
)

target_include_directories(lib_devices PUBLIC ${MY_INCLUDE})
target_compile_definitions(lib_devices PUBLIC "CMAKE_PATH=\"${DEFAULT_SAVE_PATH}\"")
