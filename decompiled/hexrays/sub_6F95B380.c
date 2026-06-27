void __cdecl __noreturn sub_6F95B380(int a1)
{
  int v1; // eax@3
  int v2; // [sp+0h] [bp-78h]@1
  _DWORD *v3; // [sp+18h] [bp-60h]@1
  char v4; // [sp+1Ch] [bp-5Ch]@1
  int v5; // [sp+20h] [bp-58h]@1
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-44h]@1
  __int16 *v7; // [sp+38h] [bp-40h]@1
  char *v8; // [sp+3Ch] [bp-3Ch]@1
  int (*v9)(); // [sp+40h] [bp-38h]@1
  int *v10; // [sp+44h] [bp-34h]@1
  char *v11; // [sp+58h] [bp-20h]@1
  char v12; // [sp+60h] [bp-18h]@1
  char v13; // [sp+70h] [bp-8h]@1

  v6 = sub_6F962A50;
  v8 = &v13;
  v7 = &word_6F96CB22;
  v9 = sub_6F95B43D;
  v10 = &v2;
  sub_6F8A1A60((int *)&v4);
  v3 = (_DWORD *)sub_6F961D10(16);
  v5 = 1;
  sub_6F8BBF30(&v11, (int)&off_6FB49930, a1);
  v5 = 2;
  sub_6F924BF0(v3, (int)&v11);
  if ( v11 != &v12 )
    j_free_1(v11);
  v1 = (int)v3;
  *v3 = off_6FBB035C;
  *(_DWORD *)(v1 + 8) = a1;
  *(_DWORD *)(v1 + 12) = &off_6FB49930;
  v5 = -1;
  sub_6F9628A0(v1, (int)&off_6FBAC74C, (int)sub_6F90F370);
}
