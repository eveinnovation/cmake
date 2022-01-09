cmake_minimum_required(VERSION 2.8.12)
project(decode_encode)

set(FFMPEG_DEV_ROOT /home/ovidiu/ffmpeg_build)

ADD_LIBRARY(remux remux.h remux.c)
ADD_EXECUTABLE(stream main.c)
TARGET_LINK_LIBRARIES(stream remux)
