cmake_minimum_required(VERSION 3.10.0)
project(TU821-Sem2-Project VERSION 0.1.0 LANGUAGES C CXX)

#find_package(SQLite3 REQUIRED) TODO: implement this

find_package(Qt6 COMPONENTS
        Widgets REQUIRED)

add_executable(TU821-Sem2-Project 
        main.cpp
        crop/AbstractCrop.cpp
        crop/AbstractCrop.h
        item/Item.h 
        item/Item.cpp 
        item/Chemical.cpp 
        item/Chemical.h 
        item/Tool.cpp 
        item/Tool.h
        player/Player.h
        player/Player.cpp
        shop/Shop.h 
        shop/Shop.cpp 
        crop/StandardCrop.cpp
        crop/StandardCrop.h
        Field.cpp
        Field.h
        crop/species.h
        crop/SpecialCrop.cpp
        crop/SpecialCrop.h
        item/Chemical.cpp
        item/Chemical.h
        item/Tool.cpp
        item/Tool.h
        crop/SpecialCrop.h
        crop/SpecialCrop.cpp
        crop/ability.h
)

target_link_libraries(TU821-Sem2-Project
        Qt6::Widgets)

#target_link_libraries(TU821-Sem2-Project
#        SQLite3
#)

