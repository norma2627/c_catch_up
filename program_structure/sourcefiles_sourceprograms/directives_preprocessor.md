# Directives to the Preprocessor
プリプロセッサへのディレクティブ

ディレクティブ:
コンパイル前にプログラムのテキストに特定の操作を行うようにCプリプロセッサに指示する。

defineプリプロセッサの例
```
#define MAX 100
```
コンパイル前にMAXで100を置き換えるようにコンパイラに指示する。

コンパイラのプリプロセッサディレクティブは以下のとおり。
#define 	#endif 	#ifdef 	　　#line
#elif 	　　#error 	#ifndef 	#pragma
#else 	　　#if 	#include 	#undef