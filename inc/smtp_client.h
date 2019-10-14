#ifndef __SMTP_H
#define __SMTP_H
#include <stdint.h>

//域名类型
#define ADDRESS_TYPE_DOMAIN 0
//IP地址类型
#define ADDRESS_TYPE_IP 1

//smtp服务初始化
void smtp_clinet_init(void);
//设置smtp服务器地址和端口
int smtp_set_server_addr(const char *server_addr, uint8_t addr_type, const char *port);
//设置smtp服务器的用户名密码
int smtp_set_auth(const char *username, const char *password);
//发送邮件
int smtp_send_mail(char *from, char *to, char *subject, char *body);
#endif /* __SMTP_H */