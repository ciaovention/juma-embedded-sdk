#发送数据
***
##函数声明
```
void ble_device_send(uint8_t* data, uint32_t size);
```

***
##函数功能
向与之相连的 BLE 设备发送消息。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*data*|uint8_t* |要发送的消息的起始地址
*size*|uint32_t|要发送的消息的长度
*返回值*  | 无    | 无

***
##函数举例
```
	//当前函数
	void foo()
	{
		...
		
		//向与之相连的BLE设备发送消息
		ble_device_send("JUMA_BLE", strlen("JUMA_BLE"));
				
		...
	}
	
```