#串口收到数据事件
***
##函数声明
```
void hif_on_message (uint8_t* data, uint32_t size);
```


***
##函数功能
当接收到来自串口的消息后由系统调用。  
用于处理来自串口的消息。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*data*|uint8_t *|表示收到的消息
*size*|uint32_t|表示收到的消息的大小
*返回值*  | void      | 无

***
##函数举例
```	
	//当前函数
	void hif_on_message (uint8_t* data, uint32_t size)
	{
		hif_send(data, size);		//将数据发送回外挂主机
	}
```