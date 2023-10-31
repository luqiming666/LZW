Lempel-Ziv-Welch (LZW)：一种字典压缩算法，通过构建和更新字典来将重复的字符串替换为短的编码。LZW压缩算法是Unisys的专利，有效期到2003年，所以对它的使用已经没有限制了。  

LZW压缩算法的基本原理：提取原始文本文件数据中的不同字符，基于这些字符创建一个编译表，然后用编译表中的字符的索引来替代原始文本文件数据中的相应字符，减少原始数据大小。看起来和调色板图象的实现原理差不多，但是应该注意到的是，我们这里的编译表不是事先创建好的，而是根据原始文件数据动态创建的，解码时还要从已编码的数据中还原出原来的编译表。百度百科：https://baike.baidu.com/item/LZW%E7%AE%97%E6%B3%95/7293853

实测压缩率：  
91.88%（111607字节的Json文件 --> 1953字节）  
57%（1584字节 --> 680字节）    


// 测试程序使用方法：   
To display help for the program:
	$ ./lzw

To compress a file:
	$ ./lzw c input.html

To decompress a file:
	$ ./lzw d input.html.lzw
