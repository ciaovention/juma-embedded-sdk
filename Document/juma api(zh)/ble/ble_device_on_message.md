#收到数据事件
***
##函数声明
```
void ble_device_on_message(uint8_t *data,uint32_t size);
```
***
##函数功能
当与之相连的 BLE 设备向本设备发送消息时由系统调用。  
处理其他 BLE 设备发过来的消息。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*data*|uint8_t|表示收到的消息
*size*|uint32_t|表示收到的消息的大小
*返回值*  | void      | 无

***
##函数举例
```
	//当前函数
	void ble_device_on_message(uint8_t *data,uint32_t size)
	{
		...
		
		ble_device_send(data, size);	//将受到的消息发送回去，查看
		
		...
	}
```	

