### Specification
* `input.txt`输入文件
* `output.txt`输出文件
* `decryption` 异或解密模块
* `encryption` 异或加密模块
* `fileHandler` 文件输入输出，栈操作
* `headers.h` 全部头文件以及预编译部分
* `testClient` 测试客户端
* 异或秘钥储存于`encryption.c`源文件的`gl_key`变量中

### Usage
##### gcc
* `make`
* `./testClient`

##### others
* 所有文件复制至同一目录下
* 尝试直接编译`testClient.c`文件
* 若失败请按以下步骤：
    * 分别编译`encryption.c` `decryption.c` `fileHandler.c` `testClient.c`文件
    * 直接链接`encrpytion.o``decryption.o` `fileHandler.o` `testClient.o`文件
* 若上述步骤失败请安装`gcc`:)