# leveldb参考资料
参考资料：https://www.cnblogs.com/JayL-zxl/p/14966618.html

leveldb官方benchmark: http://www.lmdb.tech/bench/microbench/benchmark.html

公开测试结果：
rocksdb: https://openbenchmarking.org/test/pts/rocksdb-1.0.2
leveldb: https://openbenchmarking.org/test/pts/leveldb


leveldb使用：https://xiaodongq.github.io/2024/07/10/leveldb-learn-first/#4-%E5%9F%BA%E6%9C%AC%E6%93%8D%E4%BD%9C%E6%B5%8B%E8%AF%95


leveldb和rocksdb都有一个bentchmark的程序对其进行测试
leveldb benchmark使用: https://honor-ry.github.io/posts/65b3.html
leveldb ycsb使用: https://honor-ry.github.io/posts/de979122.html


# leveldb测试结果
1. 读100,0000条数据
![alt text](res/image.png)

2. 读1000,0000条数据
![alt text](res/image-1.png)

# 写作参考
这个是对比的文章，学习一下这个搞一个报告：https://brionas.github.io/2014/11/17/leveldb-learning/