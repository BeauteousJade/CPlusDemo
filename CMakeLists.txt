cmake_minimum_required(VERSION 3.21)
project(Demo)

set(CMAKE_CXX_STANDARD 11)

add_executable(Demo code/main.cpp
        code/cast.cpp
        code/array.cpp
        code/pointer.cpp
        code/io_simple_test.cpp
        code/method.cpp
        code/ref.cpp
        code/template_method.cpp code/clazz/Stock.h code/clazz/Stock.cpp code/clazz/StockTest.cpp code/oper/Time.h code/oper/Time.cpp code/oper/TimeTest.cpp code/cast_type/Stonewt.h code/cast_type/Stonewt.cpp code/cast_type/StonewtTest.cpp code/bad/StringBad.cpp code/bad/StringBad.h code/bad/StringBadTest.cpp code/ext/player/TableTennisPlayer.h code/ext/player/TableTennisPlayer.cpp code/ext/player/TableTennisPlayerTest.cpp code/ext/player/RatePlayer.cpp code/ext/player/RatePlayer.h code/ext/brass/Brass.cpp code/ext/brass/Brass.h code/ext/brass/BrassPlus.cpp code/ext/brass/BrassPlus.h code/ext/brass/BrassTest.cpp code/ext/abc/AcctABC.h code/ext/abc/BrassV2.cpp code/ext/abc/BrassV2.h code/ext/abc/BrassPlusV2.cpp code/ext/abc/BrassPlusV2.h code/ext/abc/AcctABC.cpp code/ext/abc/ABCTest.cpp code/ext/dma/BaseDMA.cpp code/ext/dma/BaseDMA.h code/ext/dma/HasDMA.cpp code/ext/dma/HasDMA.h code/ext/dma/DMATest.cpp code/ext/priv/Student.cpp code/ext/priv/Student.h code/ext/priv/StudentTest.cpp)
