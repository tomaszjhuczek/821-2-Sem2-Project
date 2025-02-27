cmake_minimum_required(VERSION 3.5.0)
project(TU821-Sem2-Project VERSION 0.1.0 LANGUAGES C CXX)

add_executable(TU821-Sem2-Project 
        main.cpp
        crop/AbstractCrop.cpp
        crop/AbstractCrop.h
        item/Item.h 
        item/Item.cpp 
        player/Player.h
        player/Player.cpp
        shop/Shop.h 
        shop/Shop.cpp 
        crop/StandardCrop.cpp
        crop/StandardCrop.h
        crop/ChildCrop.cpp
        crop/ChildCrop.h
        Field.cpp
        Field.h
        crop/species.h
)


