# Kthset
小さい方からK番目の値を高速に取り出すことのできるsetです。

## コンストラクタ
使用する型と何番目を取り出すかのKを用います。
```cpp
Kthset<T> st(K)
```

## insert
`void insert(T v)`
* 概要：要素`v`を挿入します。既に`v`が存在していた場合追加されません。
* 計算量：要素数 $N$ のとき、 $O(logN)$
<br>

## erase
`void erase(T v)`
* 概要：要素`v`を削除します。
* 計算量：要素数 $N$ のとき、 $O(logN)$
<br>

## size
`int size()`
* 概要：要素数を取得します。
* 計算量： $O(1)$
<br>

## getKth
`T getKth()`
* 概要：昇順でK番目の要素を取得します。要素数がK未満の場合エラーが出ます。
* 計算量： $O(1)$