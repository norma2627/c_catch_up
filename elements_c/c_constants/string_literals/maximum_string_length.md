# Maximum String Length
最大文字列長:
(MS固有の仕様)
コンパイラが連結の後に文字列リテラルを509文字まで受け入れるように要求する。
MS Cで使用できる文字列リテラルの最大長: 約2,048バイト
※文字列リテラルが二重引用符で囲まれた複数の部分で構成されている場合、プロセッサはそれらの部分を単一の文字列に結合し、連結された各行に対して合計バイト数に1バイトを追加する。

例:
1行あたり50文字の40行(2000文字)の文字列と7文字で構成される1行
⇒各行は二重引用符で囲まれているとする。
⇩
2007バイトと終端のnull文字の1バイトを加算し、合計2008倍となる。
連結後は、最初の各40行に余分な文字が追加されているため、合計は2048バイトになる。
行連結文字(\)が二重引用符の代わりに使用されている場合、プリプロセッサは各行に余分な文字を追加しない。

引用符で囲まれた個々の文字列が2048バイトを超えることはできないが、文字列を連結することで、ほぼ65535バイトの文字列リテラルを作成できる。

