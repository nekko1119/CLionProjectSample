# テストのプロジェクト名
project(CalclatorTest)

# gtestのヘッダとライブラリのパスを通す
include_directories($ENV{GTEST_DIR}/include)
link_directories($ENV{GTEST_DIR}/lib)

# テストプロジェクトだと教える
enable_testing()

# 実行ファイルはcalc_testという名前でテストのcppファイルを列挙する(多い場合は先にsetしておくと良い)
add_executable(calc_test CalculatorTest.cpp)

# calc_testにlibgtest.aとlibgtest_main.aとsrc\CMakeLists.txtで作った
# add_library(Calculator ${SOURCE_FILES})のライブラリをリンクする
target_link_libraries(calc_test gtest gtest_main Calculator)
