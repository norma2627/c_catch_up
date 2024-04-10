# C Pragmas
Cプラグマ:

プラグマ:
コンパイル時に特定のアクションをするように、コンパイラに指示する。
プラグマはコンパイラごとに異なる。

例:
optimizeプラグマを使用すると、プログラムで実行する最適化を設定できる。

MS Cのプラグマは以下のとおり。
```
alloc_text
auto_inline
bss_seg
check_stack
code_seg
comment
component
const_seg
data_seg
deprecated

detect_mismatch
fenv_access
float_control
fp_contract
function
hdrstop
include_alias
inline_depth
inline_recursion

intrinsic
make_public
managed
message
omp
once
optimize
pack
pop_macro

push_macro
region, endregion
runtime_checks
section
setlocale
strict_gs_check
system_header
unmanaged
warning
```