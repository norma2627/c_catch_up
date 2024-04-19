# Postfix Operators
後置演算子
式の評価で優先順位が最高位になる。

## Syntax
postfix-expression:
 primary-expression
 postfix-expression [ expression ]
 postfix-expression(argument-expression-listopt)
 postfix-expression . identifier
 postfix-expression -> identifier
 postfix-expression ++
 postfix-expression --

優先順位レベルの演算子:
配列の添字、関数演算子、構造体/共用体メンバー、後置インクリメント/デクリメント演算子
