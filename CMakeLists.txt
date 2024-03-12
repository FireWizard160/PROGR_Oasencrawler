cmake_minimum_required(VERSION 3.26)
project(Oasencrawler)

set(CMAKE_CXX_STANDARD 23)

add_executable(Oasencrawler main.cpp
        Field.cpp
        Field.h
        Board.cpp
        Board.h
        Player.cpp
        Player.h
        Enemy.cpp
        Enemy.h
        Entity.cpp
        Entity.h
        Event.cpp
        Event.h
        Item.cpp
        Item.h
)
