add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES} game/main.cpp ../include/game/Score.h game/Score.cpp)

target_link_libraries(${PROJECT_NAME} ${BLT_LIBRARIES})

file(COPY ${BLT_LIBRARY} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
