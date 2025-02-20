cmake_minimum_required(VERSION 3.5.0)
project(TU821-Sem2-Project VERSION 0.1.0 LANGUAGES C CXX)

add_executable(TU821-Sem2-Project 
        main.cpp
        AbstractCrop.cpp
        AbstractCrop.h
        Item.h 
        Item.cpp 
        ItemRegistry.h 
        ItemRegistry.cpp
        StandardCrop.cpp
        StandardCrop.h
)


