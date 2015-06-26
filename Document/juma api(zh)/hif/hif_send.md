
#串口发送数据
***
##函数声明
```
void hif_send(uint8_t* data, uint32_t size);
```

***
##函数功能
通过串口发送数据，串口用作与外挂主机通信。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*data*|uint8_t* |指定串口的 RX 脚
*size*|uint32_t |指定串口的 TX 脚
*返回值*  | 无    | 无

***
##函数举例
```
	//当前函数
	void foo()
	{
		//向外挂主机发送数据
		hif_send("JUMA_BLE_TEST!\r\n", strlen("JUMA_BLE_TEST!\r\n"));
	}
```