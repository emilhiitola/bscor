cmake_minimum_required(VERSION 3.5)
project(scaffold-routing-rectification LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(root)
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_library(PXPHYSICS PhysX3_x64.dll PhysX3Common_x64.dll PhysX3CharacterKinematic_x64.dll PhysX3Cooking_x64.dll nvToolsExt64_1.dll PxFoundation_x64.dll PxPvdSDK_x64.dll glut32.dll)
set_target_properties(PXPHYSICS PROPERTIES LINKER_LANGUAGE CXX DEBUG_POSTFIX "DEBUG")

message("Printing project dir ${CMAKE_SOURCE_DIR}")
add_executable(scaffold-routing-rectification
    # main files
    main.cpp
    DNA.h
    ParseSettings.h
    SimulatedAnnealing.h
    Relaxmain.h
    Relaxmain.cpp
    Definition.h
    Definition.cpp
    Helix.h
    Helix.cpp
    Physics.h
    Physics.cpp
    Scene.h
    Scene.cpp
    Utility.h
    Utility.cpp
)
set(CompilerFlags
        CMAKE_CXX_FLAGS
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_C_FLAGS
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_RELEASE
        -fopenmp
        )
foreach(CompilerFlag ${CompilerFlags})
  string(REPLACE "/MD" "/MT" ${CompilerFlag} "${${CompilerFlag}}")
endforeach()

set_property(TARGET scaffold-routing-rectification PROPERTY
             MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release>")



message("-- Linking PxPhysics libraries")
set(LIBRARIES
    debug PhysX3DEBUG_x64 optimized PhysX3_x64.dll
    debug PhysX3CommonDEBUG_x64 optimized PhysX3Common_x64.dll
    debug PhysX3ExtensionsDEBUG optimized PhysX3Extensions.dll
    debug PhysXProfileSDKDEBUG optimized PhysXProfileSDK.dll
    debug PhysX3CharacterKinematicDEBUG_x64 optimized PhysX3CharacterKinematic_x64.dll
    debug PhysX3CookingDEBUG_x64 optimized PhysX3Cooking_x64.dll
    debug PhysXVisualDebuggerSDKDEBUG
    #nvToolsExt64_1.dll
    #glut32.dll
    #PxFoundation_x64.dll PxPvdSDK_x64.dll
    )

set_property(TARGET scaffold-routing-rectification PROPERTY
             MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release>")
target_link_libraries(scaffold-routing-rectification PRIVATE ${LIBRARIES})

