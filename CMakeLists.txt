cmake_minimum_required(VERSION 3.5.0)

set(SOURCES
    ./src/Train.h
    ./src/Wagon.h
    ./src/Train.cpp
    ./src/Wagon.cpp
    ./src/TrainReader.h
    ./src/TrainReader.cpp
    ./src/TrainConsole.h
    ./src/TrainConsole.cpp
    )

include_directories(
    ./src/
    )
add_executable(MadnessShapes ./src/main.cpp ${SOURCES})