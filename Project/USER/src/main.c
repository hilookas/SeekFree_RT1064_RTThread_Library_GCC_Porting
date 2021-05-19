#include "include.h"

void main(void) {
  gpio_init(B9, GPO, 0, GPIO_PIN_CONFIG); // 初始化 B9 端口输出模式 初始化之后输出低电平 使用默认引脚配置 GPIO_PIN_CONFIG

  while (1) {
    gpio_toggle(B9);
    rt_thread_mdelay(100);
  }
}

// void main(void) {
//   ips200_init();
//   mt9v03x_csi_init();

//   while (1) {
//     ips200_displayimage032(mt9v03x_csi_image[0], MT9V03X_CSI_W, MT9V03X_CSI_H);
//   }
// }
