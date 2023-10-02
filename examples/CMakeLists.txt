cmake_minimum_required(VERSION 3.8.2)

project(ExamplesUnitC++)

SET(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_LIST_DIR}/..)


include_directories(${CMAKE_INSTALL_PREFIX}/include)

MACRO(SUBDIRLIST result curdir)
  FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
  SET(dirlist "")
  FOREACH(child ${children})
    IF(IS_DIRECTORY ${curdir}/${child})
    IF(EXISTS ${curdir}/${child}/CMakeLists.txt)
      LIST(APPEND dirlist ${child})
      ENDIF()
    ENDIF()
  ENDFOREACH()
  SET(${result} ${dirlist})
ENDMACRO()

SUBDIRLIST(SUBDIRS ${CMAKE_CURRENT_LIST_DIR})

FOREACH(subdir ${SUBDIRS})
  ADD_SUBDIRECTORY(${subdir})
ENDFOREACH()
