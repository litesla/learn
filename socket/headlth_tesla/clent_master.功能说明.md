### client

对于一个ｃｌｉｅｎｔ，单独创建６个子线程，对于６个指标进行实时控制，按照项目的不同。设置不同的时间间隔，结构体控制

监控所得数据先存放在本地，每１０次写一次硬盘

执行程序可以使用ｐｏｐｅｎ

有一个线程检测ｍａｓｔｅｒ是否上线，如果上线，

报警信息（温度警告ｃｐｕ信息获取，系统运行概况获取，磁盘报警级别，内存报警级别，ｃｐｕ报警级别），恶意进程



系统上线应该先把缓冲区写进硬盘，让后看压缩区是否有压缩文件，有的话解压缩，发送文件，然后发送产生的数据信息，存放在程序缓冲区中，

有一个线程用来监听系统是否上线。上线发送压缩区数据，发送完成成清空数据

有一个线程用来分时间段检测产生的信息是否大于３０ｍ，大于３０ｍ进行压缩。

当所有文件发送完成，告诉脚本线程可以直接发送信息给ｍａｓｔｅｒ，ｍａｓｔｅｒ

下线　监视线程告知脚本线程不能发送。

### master

上线读取配置文件，开启１０个线程，向１０个ｃｌｉｅｎｔ端发送上线提示，

等待，接受信息，然后存储

结构体：ｃｌｉｅｎｔ端ｉｐ，存储位置，６种文件文件名分开存储

警告信息单独存储