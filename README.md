
# SerialPortPlotter：一款开源基于Qt实现的多通道串口示波器

@[TOC](目录)

---

### 1、软件简介

基于github开源作者`@CieNTi`的二次开发，修改程序后重新编译。

原作者github链接：[https://github.com/CieNTi/serial_port_plotter](https://github.com/CieNTi/serial_port_plotter)

我修改程序后的github链接：[https://github.com/yzhengBTT/QtSerialPortPlotter](https://github.com/yzhengBTT/QtSerialPortPlotter)


修改的地方有：
- 修正了原作者程序里的bug，具体表现为二次开关串口后，保存为png图片按钮会变灰无法点击
- 界面全部改为中文显示
- 主题改为白色（原主题为黑色）
- 绘图范围扩大，原最大最小值范围为-65536至65536，现改为-99999999至999999999
- 去除刷新串口列表按钮，改为点击串口选择列表时候会自动刷新
- 新增清除接收按钮，可用于清除文本框的内容


### 2、软件使用方法

软件接收处理的格式为：`$`开头，`;`结尾，中间为数字，如果有多路用空格分隔。

假设单片机ADC采样有2路，那么就是：`printf("$%d %d;", ADC1, ADC2);`

假设单片机ADC采样有3路，那么就是：`printf("$%d %d %d;", ADC1, ADC2, ADC3);`

**原作者编译软件界面图：**
![](https://img-blog.csdnimg.cn/149ae3b9195c44f98cdb26e00fafd783.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBA6ZuN5q2j5LiN56eD5aS0,size_20,color_FFFFFF,t_70,g_se,x_16)

**我修改后的软件界面图：**
![](https://img-blog.csdnimg.cn/eb769660ae6449faaf322fbdb24bdbe1.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBA6ZuN5q2j5LiN56eD5aS0,size_20,color_FFFFFF,t_70,g_se,x_16)
