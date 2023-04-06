#ifndef __NGX_LOGICCOMM_H__
#define __NGX_LOGICCOMM_H__ 

#define _CMD_START	                    0  
#define _CMD_PING                       _CMD_START + 0   //������
#define _CMD_REGISTER 		            _CMD_START + 5   //ע��
#define _CMD_LOGIN 		                _CMD_START + 6   //��¼

#pragma pack (1)

//ע��ṹ
typedef struct _STRUCT_REGISTER
{
	int         iType;             //����
	char        username[56];      //�û���
	char        password[40];      //����
}STRUCT_REGISTER,*LPSTRUCT_REGISTER;

//��¼�ṹ
typedef struct _STRUCT_LOGIN
{
	char        username[56];      //�û���
	char        password[40];      //����
}STRUCT_LOGIN,*LPSTRUCT_LOGIN;

#pragma pack ()

#endif