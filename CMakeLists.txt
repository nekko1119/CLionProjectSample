# ルートのプロジェクト名
project(Calculator)
# cmakeの最低バージョン
cmake_minimum_required(VERSION 3.3)

# プロダクト、テストを通してコンパイラに渡すオプション
add_definitions(-std=gnu++1y -Wall -Wextra)

# #includeのためにヘッダーのパスを通す
include_directories(src)

# プロダクトコードのプロジェクトとテストのプロジェクトがあるよと教える
add_subdirectory(src)
add_subdirectory(test)
