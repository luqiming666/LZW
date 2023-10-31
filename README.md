Lempel-Ziv-Welch (LZW)：一种字典压缩算法，通过构建和更新字典来将重复的字符串替换为短的编码。
实测压缩率：91.88%（111607字节的Json文件 --> 1953字节）、57%（1584字节 --> 680字节）

To display help for the program:
	$ ./lzw

To compress a file:
	$ ./lzw c input.html

To decompress a file:
	$ ./lzw d input.html.lzw
