set(EXE_SOURCES
    "main.cc")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})
target_link_libraries(${EXECUTABLE_NAME} PUBLIC
     ${LIBRARY_NAME}
     nlohmann_json
     fmt::fmt
     spdlog::spdlog_header_only
     ${CONAN_CXXOPTS})

if (${ENABLE_WARNINGS})
    target_set_warnings(TARGET ${EXECUTABLE_NAME} ENABLE ON AS_ERROR OFF)
endif()
