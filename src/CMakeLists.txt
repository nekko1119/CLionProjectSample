# プロダクトの方のプロジェクト名
project(CalculatorRun)

# SROUCE_FILES変数に*.cppをまとめる
set(SOURCE_FILES Calculator.cpp)

# main関数以外をライブラリにする
add_library(Calculator ${SOURCE_FILES})

# 実行ファイルはrunという名前でmain関数のみ
add_executable(run main.cpp)

# 実行ファイルにライブラリをリンクする
target_link_libraries(run Calculator)
