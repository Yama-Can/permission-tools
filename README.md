# 使用方法
## ダウンロード
generator.exeをダウンロードします。
## 実行
generator.exeがあるフォルダを右クリックし、「ターミナルを開く」または「コマンドプロンプトで開く」を押します。
.\generator.exeと入力すると、ヘルプが表示されます。
## コマンドオプション一覧
### --inf
.\generator.exe --infと入力すると、以下のような数列が得られます。
```
1
2
4
8
16
...
```
上の数列は、パーミッションを表したものです。
例えば、A、B、C、Dという4つの条件があるとき、A、Dを選んだときは1+8=9、B、C、Dを選んだときは2+4+8=14、と必ず数字が被らないようになっています。
Discordでもこれが使われています。
### --cal
.\generator.exe --calと入力し、要素数を入力します。
#### 例
```
> .\generator.exe --cal
> 5
> 1 0 1 1 0
13
```
上のコード（> の後にあるのが入力、> がないのが出力です）では、13と出力されています。
これは、--infで紹介したパーミッション整数を足しています。
1 0 1 1 0 は 1+4+8で13が出力されます。
また、要素数が6の時は以下のように計算されます。
```
> .\generator.exe --cal
> 6
> 1 0 0 0 1 1
49
```
1+16+32=49です。
