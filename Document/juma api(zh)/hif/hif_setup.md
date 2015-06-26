#串口配置
***
##函数声明
```
void hif_setup(uint8_t rx_pin, uint8_t tx_pin);
```


***
##函数功能
设置串口的基本参数，串口用作与外挂主机通信。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*rx_pin*|uint8_t |指定串口的 RX 脚
*tx_pin*|uint8_t |指定串口的 TX 脚
*返回值*  | 无    | 无

***
##函数举例
```	
	#define RX_PIN 8
	#define TX_PIN 9
	
	//当前函数
	void foo()
	{
		...
		
		hif_setup(RX_PIN, TX_PIN);
		
		...
	}
```