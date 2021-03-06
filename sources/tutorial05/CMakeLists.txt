set(BUILD_TARGET "Tutorial05")

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

configure_file("${CMAKE_CURRENT_LIST_DIR}/common.h.in"
               "${CMAKE_CURRENT_LIST_DIR}/common.h" @ONLY)

set(SOURCES
    common.h tiny_obj_loader.h
    main.cpp oglwidget.cpp oglwidget.h)

set(SHADERS render.vs render.fs)

add_executable(${BUILD_TARGET} ${SOURCES} ${SHADERS})
qt5_use_modules(${BUILD_TARGET} Widgets OpenGL)

if (MSVC)
  source_group("Source Files" FILES ${SOURCES})
  source_group("Shader Files" FILES ${SHADERS})
endif()

target_link_libraries(${BUILD_TARGET} ${QT_LIBRARIES} ${OPENGL_LIBRARIES})
