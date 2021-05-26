//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& 列车通信总线接口 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//*文件名称:tba_bus.h

//*文件作用:列车通信总线接口

//*文件作者:

//*创建日期:2007年5月
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


#ifndef OCC_H
#define OCC_H

#define STATUS_ON 1
#define STATUS_OFF 0


void occ_init(void);
void occ_set_occ_status(uint8 flag);
void occ_send_audio(void);
uint8 get_occ_status(void);


#endif

