# CLion Project Sample

CLionにおけるプロダクトコードとテストの配置サンプルです。
こんな感じでCMakeLists.txtとコードを置けばいい感じにテストが実行できます。

* 今回はソースコードの量が少ないためCMakeLists.txt内に直接リストしていますが、多い場合files.cmakeとか外に出してincludeするのが良いです
* gtestのヘッダーとライブラリは `GTEST_DIR`という環境変数になっている前提で書いていますので、適宜該当箇所をよしなにして下さい
