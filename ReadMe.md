# このソフトウェアについて #

ProjectSplit201607271053は私個人が学習目的で作成したソフトウェアです。

プロジェクトは.libに分割するとファイルサイズが肥大化します。
そこで、.libにせずに分割してプロジェクトにする方法を考えました。

# 開発環境 #

* Windows XP SP3
* C++/Win32
* Visual C++ 2010 Express

# 分割方法 #

[前回](https://github.com/ytyaru/ProjectSplit201607270810)を踏襲します。

ただし、[前回](https://github.com/ytyaru/ProjectSplit201607270810)のはファイルシステム上ではディレクトリに分割されていませんでした。
そこで、今回はファイルシステム上でもディレクトリに分割しました。
このため、追加インクルードディレクトリの設定を追加しました。

設定が面倒ですが、ファイルシステムからも同様の分類からファイルを探すことができます。

# イメージ #

## プロジェクトディレクトリ構造 ##

![プロジェクトディレクトリ構造](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160727/20160727171054.png)

## ディレクトリ構造 ##

![ディレクトリ構造](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160727/20160727171255.png)

## 実行 ##

![完成図](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160726/20160726213827.png)

# ライセンス #

このソフトウェアはCC0ライセンスです。

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed.ja)
